#ifndef TYPES_H
#define TYPES_H

#define MAX_MESSAGE_LEN 256
#define MAX_LEVEL_LEN   10
#define MAX_TIME_LEN    30
#define MAX_TOP_ERRORS  10
#define MAX_LINE        1000

typedef struct
{
    char level[MAX_LEVEL_LEN];
    char timestamp[MAX_TIME_LEN];
    char message[MAX_MESSAGE_LEN];
} LogEntry;

typedef struct
{
    int total_lines;
    int error_count;
    int warn_count;
    int info_count;
    int unknown_count;
} LogSummary;

typedef struct
{
    char message[MAX_MESSAGE_LEN];
    int  frequency;
} MessageFreq;

#endif