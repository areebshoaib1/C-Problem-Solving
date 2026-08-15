#include <stdio.h>
#include <stdlib.h>
#include "01_types.h"
#include "08_reporter.h"

void print_summary(LogSummary summary, MessageFreq *top, int top_count, const char *filename);
void write_report (LogSummary summary, MessageFreq *top, int top_count, const char *filename, const char *outfile);

static void write_to(FILE *out, LogSummary summary, MessageFreq *top, int top_count, const char *filename)
{
    fprintf(out, "========================================\n");
    fprintf(out, "         LOG ANALYSIS REPORT\n");
    fprintf(out, "========================================\n");
    fprintf(out, "File     : %s\n", filename);
    fprintf(out, "Total    : %d lines\n", summary.total_lines);
    fprintf(out, "----------------------------------------\n");

    if (summary.total_lines > 0)
    {
        fprintf(out, "ERROR    : %d  (%.1f%%)\n", summary.error_count,
                (summary.error_count * 100.0) / summary.total_lines);
        fprintf(out, "WARN     : %d  (%.1f%%)\n", summary.warn_count,
                (summary.warn_count  * 100.0) / summary.total_lines);
        fprintf(out, "INFO     : %d  (%.1f%%)\n", summary.info_count,
                (summary.info_count  * 100.0) / summary.total_lines);
        fprintf(out, "UNKNOWN  : %d  (%.1f%%)\n", summary.unknown_count,
                (summary.unknown_count * 100.0) / summary.total_lines);
    }

    fprintf(out, "----------------------------------------\n");
    fprintf(out, "TOP REPEATED ERRORS:\n\n");

    if (top == NULL || top_count == 0)
    {
        fprintf(out, "  No errors found.\n");
    }
    else
    {
        for (int i = 0; i < top_count; i++)
        {
            fprintf(out, "  %d. [%dx] %s\n", i + 1, top[i].frequency, top[i].message);
        }
    }

    fprintf(out, "========================================\n");
}

void print_summary(LogSummary summary, MessageFreq *top, int top_count, const char *filename)
{
    write_to(stdout, summary, top, top_count, filename);
}

void write_report(LogSummary summary, MessageFreq *top, int top_count, const char *filename, const char *outfile)
{
    FILE *fp = fopen(outfile, "w");

    if (fp == NULL)
    {
        printf("Error: Could not create report file '%s'\n", outfile);
        return;
    }

    write_to(fp, summary, top, top_count, filename);
    fclose(fp);
    printf("Report saved to: %s\n", outfile);
}