#include <stdio.h>
#include <stdlib.h>
#include "../options/finding-repositories.c"
#include "../options/how-this-works.c"
#include "../options/about.c"

void home_screen() {
    printf("\n\n\tWELCOME TO REPOSITORY FINDER\t\n\n");

    printf("\t1: Find Repository\n");
    printf("\t2: How This Works\n");
    printf("\t3: About\n");
    printf("\t4: Exit\n");
    printf("\n");

    int option_chosen;
    scanf("%d", &option_chosen);
    if (option_chosen == 1) {
        find_repository();
    }
    else if (option_chosen == 2) {
        how_this_works();
    }
    else if (option_chosen == 3) {
        about();
    }
    else if (option_chosen == 4) {
        exit(0);
    }
}