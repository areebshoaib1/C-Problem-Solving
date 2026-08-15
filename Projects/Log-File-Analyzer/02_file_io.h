#ifndef FILEIO_H
#define FILEIO_H

char **File_reader(const char *filename, int *line_count);
void   free_lines(char **lines, int count);

#endif