#include <stdio.h>
#include "fileio.h"

int load_text(const char* filename, char* buffer, int max)
{
    FILE* f = fopen(filename, "r");
    if (!f) return 0;

    int i = 0;
    int ch;

    while ((ch = fgetc(f)) != EOF && i < max - 1)
        buffer[i++] = (char)ch;

    buffer[i] = '\0';
    fclose(f);
    return 1;
}
