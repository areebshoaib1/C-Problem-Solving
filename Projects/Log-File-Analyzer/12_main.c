#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01_types.h"
#include "02_file_io.h"
#include "04_parser.h"
#include "06_analyzer.h"
#include "08_reporter.h"
#include "10_alerts.h"

int main(int argc, char *argv[])
{
    char *filepath  = NULL;
    char *outfile   = NULL;
    int   threshold = 0;
    printf("\n\n\t\t\t\t\t\t\t********** LOG FILE ANALYZER TOOL BY M.Areeb Shoaib **********\t\n\n");
    
    /* parse command line arguments */
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--output") == 0 && i + 1 < argc)
        {
            outfile = argv[++i];
        }
        else if (strcmp(argv[i], "--threshold") == 0 && i + 1 < argc)
        {
            threshold = atoi(argv[++i]);
        }
        else
        {
            filepath = argv[i];
        }
    }

    if (filepath == NULL)
    {
        printf("Usage: ./analyzer <logfile> [--output report.txt] [--threshold 50]\n");
        return 1;
    }

    /* step 1: read file */
    int    line_count = 0;
    char **lines      = File_reader(filepath, &line_count);

    if (lines == NULL)
    {
        printf("Error: Failed to read file.\n");
        return 1;
    }

    printf("Read %d lines from '%s'\n\n", line_count, filepath);

    /* step 2: parse lines into LogEntry array */
    LogEntry *entries = parse_all(lines, line_count);
    free_lines(lines, line_count);

    if (entries == NULL)
    {
        printf("Error: Failed to parse log entries.\n");
        return 1;
    }

    /* step 3: analyze */
    LogSummary   summary   = count_levels(entries, line_count);
    int          top_count = 0;
    MessageFreq *top       = find_top_errors(entries, line_count, &top_count);

    /* step 4: print report to terminal */
    print_summary(summary, top, top_count, filepath);

    /* step 5: write report to file if --output given */
    if (outfile != NULL)
    {
        write_report(summary, top, top_count, filepath, outfile);
    }

    /* step 6: check alert threshold */
    if (threshold > 0)
    {
        check_and_alert(summary, threshold, filepath);
    }

    /* step 7: free everything */
    free(entries);
    free(top);

    return 0;
}