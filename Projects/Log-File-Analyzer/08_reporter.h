#ifndef REPORTER_H
#define REPORTER_H

#include "01_types.h"

void print_summary(LogSummary summary, MessageFreq *top, int top_count, const char *filename);
void write_report (LogSummary summary, MessageFreq *top, int top_count, const char *filename, const char *outfile);

#endif