#include <stdio.h>
#include "splash.h"
#include "utils.h"

void render_splash(const char* name, const char* date)
{
    print_line('+', 70);

    printf("                       [Magrathea ver 0.2]\n");
    printf("         A place where planets are crafted from nothing.\n");
    printf("    Hidden potential becomes brilliance under expert hands.\n");
    printf("                       Welcome to Magrathea.\n");

    print_line('+', 70);

    printf("[User]: %s\t\t[Execution Date]: %s\n", name, date);
    print_line('=', 70);
}
