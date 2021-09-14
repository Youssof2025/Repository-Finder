#pragma once
#include <stdio.h>
#include "../tools/choose_option.c"

void how_this_works() {
    system("clear");
    printf("\n\n\tHOW THIS WORKS\t\n\n");
    printf("\tThis Programe will work by you giving it a specific directory to search for a certain repository with little knowledge about it.\n");
    printf("\tThis is very helpful for people with a lot of repositories on their machines.\n");
    printf("\n");

    choose_option();
}