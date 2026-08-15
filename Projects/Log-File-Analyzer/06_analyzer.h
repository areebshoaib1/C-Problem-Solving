#ifndef ANALYZER_H
#define ANALYZER_H

#include "01_types.h"

LogSummary   count_levels(LogEntry *entries, int count);
MessageFreq *find_top_errors(LogEntry *entries, int count, int *result_count);

#endif