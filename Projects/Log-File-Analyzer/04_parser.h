#ifndef PARSER_H
#define PARSER_H

#include "01_types.h"

LogEntry  parse_line(const char *raw_line);
LogEntry *parse_all(char **lines, int count);

#endif