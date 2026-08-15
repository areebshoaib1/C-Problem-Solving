#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01_types.h"
#include "02_file_io.h"

char **File_reader(const char *filename, int *line_count);
void   free_lines(char **lines, int count);

char **File_reader(const char *filename, int *line_count)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: Could not open file '%s'\n", filename);
        *line_count = 0;
        return NULL;
    }

    int capacity = 10;
    int count    = 0;

    char **lines = malloc(capacity * sizeof(char *));
    if (lines == NULL)
    {
        fclose(fp);
        *line_count = 0;
        return NULL;
    }

    char buffer[MAX_LINE];

    while (fgets(buffer, sizeof(buffer), fp))
    {
        if (count >= capacity)
        {
            capacity *= 2;

            char **temp = realloc(lines, capacity * sizeof(char *));
            if (temp == NULL)
            {
                break;
            }
            lines = temp;
        }

        lines[count] = malloc(strlen(buffer) + 1);
        if (lines[count] == NULL)
        {
            break;
        }

        strcpy(lines[count], buffer);
        count++;
    }

    fclose(fp);
    *line_count = count;
    return lines;
}

void free_lines(char **lines, int count)
{
    if (lines == NULL)
    {
        return;
    }

    for (int i = 0; i < count; i++)
    {
        free(lines[i]);
    }

    free(lines);
}