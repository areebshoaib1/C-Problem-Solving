#ifndef ALERTS_H
#define ALERTS_H

#include "01_types.h"

void check_and_alert(LogSummary summary, int threshold, const char *logfile);

#endif