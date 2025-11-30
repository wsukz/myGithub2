#include <stdio.h>
#include <time.h>
#include "utils.h"

void print_line(char c, int n)
{
    for (int i = 0; i < n; i++)
        putchar(c);
    putchar('\n');
}

void sleep_ms(int ms)
{
#ifdef _WIN32
    Sleep(ms);
#else
    struct timespec ts;
    ts.tv_sec = ms / 1000;
    ts.tv_nsec = (ms % 1000) * 1000000;
    nanosleep(&ts, NULL);
#endif
}
