#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "home_screen.c"

void choose_option(){
    int option;
    printf("\t1: Back\n");
    printf("\t2: Exit\n");
    printf("\n");

    scanf("%d", &option);
    if (option == 1) {
        system("cd .. && cd src && cd tools && ./home_screen.sh && echo end");
    }
    else if (option == 2) {
        exit(0);
    }
}