#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "splash.h"
#include "utils.h"

int main()
{
    char name[64];
    char date[32];

    printf("[Enter the current date in \"YYYY-MM-DD\" format]: ");
    scanf("%31s", date);

    printf("[Enter your name]: ");
    scanf("%63s", name);

    printf("**Your input has been processed successfully.**\n");

    sleep_ms(1000);  // delay 1 sec

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    render_splash(name, date);

    return 0;
}
