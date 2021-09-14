#pragma once
#include <stdio.h>
#include "home_screen.c"

void choose_option(){
    int option;
    printf("\t1: Back\n");
    printf("\t2: Exit\n");
    printf("\n");

    scanf("%d", &option);
    if (option == 1) {
        //home_screen();
        printf("Under Construction");
    }
    else if (option == 2) {
        exit(0);
    }
}