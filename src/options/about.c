#include <stdio.h>
#include <stdlib.h>
//#include "../tools/home_screen.c"

void about() {
    system("clear");
    printf("\n\n\tABOUT\t\n\n");
    printf("\tThis is a programe written in the C programming language, it helps the user find repositories on his local machine.\n");
    printf("\n");

    int option;
    printf("\t1: Back\n");
    printf("\t2: Exit\n");
    printf("\n");

    scanf("%d", &option);
    if (option == 1) {
        //home_screen();
    }
    else if (option == 2) {
        exit(0);
    }
}