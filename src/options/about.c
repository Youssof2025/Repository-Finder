#include <stdio.h>
#include <stdlib.h>
//#include "../tools/home_screen.c"

void about() {
    system("clear");
    printf("\n\n\tABOUT\t\n\n");
    printf("\tThis is a programe that allows the user to find repositories on his local machine, this howevery could extend into finding repositories on the web.\n");
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