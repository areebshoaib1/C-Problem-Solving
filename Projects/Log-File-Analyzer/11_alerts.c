#include <stdio.h>
#include <stdlib.h>
#include "01_types.h"
#include "10_alerts.h"

void check_and_alert(LogSummary summary, int threshold, const char *logfile);

void check_and_alert(LogSummary summary, int threshold, const char *logfile)
{
    if (threshold <= 0)
    {
        return;
    }

    if (summary.error_count <= threshold)
    {
        printf("OK: Error count %d is within threshold %d\n",summary.error_count, threshold);
        return;
    }

    FILE *fp = fopen("alerts.log", "a");

    if (fp == NULL)
    {
        printf("Error: Could not write to alerts.log\n");
        return;
    }

    fprintf(fp, "[ALERT] File: %s | Errors: %d | Threshold: %d\n",logfile, summary.error_count, threshold);

    fclose(fp);

    printf("!! ALERT: %d errors exceeded threshold of %d — see alerts.log\n",summary.error_count, threshold);
}