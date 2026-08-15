#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01_types.h"
#include "04_parser.h"

LogEntry parse_line(const char *raw_line);
LogEntry *parse_all(char **lines, int count);

LogEntry parse_line(const char *raw_line)
{
    LogEntry entry;

    entry.level[0] = '\0';
    entry.timestamp[0] = '\0';
    entry.message[0] = '\0';

    if (strstr(raw_line, "Error") != NULL || strstr(raw_line, "ERROR") != NULL)
    {
        strcpy(entry.level, "ERROR");
    }
    else if (strstr(raw_line, "Warning") != NULL || strstr(raw_line, "WARN") != NULL)
    {
        strcpy(entry.level, "WARN");
    }
    else if (strstr(raw_line, "Info") != NULL || strstr(raw_line, "INFO") != NULL)
    {
        strcpy(entry.level, "INFO");
    }
    else
    {
        strcpy(entry.level, "UNKNOWN");
    } 
  
    /* copy first 29 chars as timestamp */
    strncpy(entry.timestamp, raw_line, MAX_TIME_LEN - 1);
    entry.timestamp[MAX_TIME_LEN - 1] = '\0';

    /* copy full line as message */
    strncpy(entry.message, raw_line, MAX_MESSAGE_LEN - 1);
    entry.message[MAX_MESSAGE_LEN - 1] = '\0';

    /* remove newline from message if present */
    int len = strlen(entry.message);
    if (len > 0 && entry.message[len - 1] == '\n')
    {
        entry.message[len - 1] = '\0';
    }

    return entry;
}

LogEntry *parse_all(char **lines, int count)
{
    if (lines == NULL || count <= 0)
    {
        return NULL;
    }

    LogEntry *entries = malloc(count * sizeof(LogEntry));
    if (entries == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < count; i++)
    {
        entries[i] = parse_line(lines[i]);
    }

    return entries;
}