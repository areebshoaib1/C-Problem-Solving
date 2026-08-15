#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01_types.h"
#include "06_analyzer.h"

LogSummary   count_levels(LogEntry *entries, int count);
MessageFreq *find_top_errors(LogEntry *entries, int count, int *result_count);

LogSummary count_levels(LogEntry *entries, int count)
{
    LogSummary summary;

    summary.total_lines   = count;
    summary.error_count   = 0;
    summary.warn_count    = 0;
    summary.info_count    = 0;
    summary.unknown_count = 0;

    if (entries == NULL)
    {
        return summary;
    }

    for (int i = 0; i < count; i++)
    {
        if (strcmp(entries[i].level, "ERROR") == 0)
        {
            summary.error_count++;
        }
        else if (strcmp(entries[i].level, "WARN") == 0)
        {
            summary.warn_count++;
        }
        else if (strcmp(entries[i].level, "INFO") == 0)
        {
            summary.info_count++;
        }
        else
        {
            summary.unknown_count++;
        }
    }

    return summary;
}

MessageFreq *find_top_errors(LogEntry *entries, int count, int *result_count)
{
    *result_count = 0;

    if (entries == NULL || count <= 0)
    {
        return NULL;
    }

    MessageFreq *freq = malloc(count * sizeof(MessageFreq));
    if (freq == NULL)
    {
        return NULL;
    }

    int freq_count = 0;

    for (int i = 0; i < count; i++)
    {
        if (strcmp(entries[i].level, "ERROR") != 0)
        {
            continue;
        }

        int found = 0;

        for (int j = 0; j < freq_count; j++)
        {
            if (strcmp(freq[j].message, entries[i].message) == 0)
            {
                freq[j].frequency++;
                found = 1;
                break;
            }
        }

        if (!found)
        {
            strcpy(freq[freq_count].message, entries[i].message);
            freq[freq_count].frequency = 1;
            freq_count++;
        }
    }

    /* bubble sort by frequency descending */
    for (int i = 0; i < freq_count - 1; i++)
    {
        for (int j = 0; j < freq_count - i - 1; j++)
        {
            if (freq[j].frequency < freq[j + 1].frequency)
            {
                MessageFreq temp = freq[j];
                freq[j]         = freq[j + 1];
                freq[j + 1]     = temp;
            }
        }
    }

    *result_count = (freq_count < MAX_TOP_ERRORS) ? freq_count : MAX_TOP_ERRORS;
    return freq;
}