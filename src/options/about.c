#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "../tools/choose_option.c"

void about() {
    system("clear");
    printf("\n\n\tABOUT\t\n\n");
    printf("\tThis is a programe written in the C programming language, it helps the user find repositories on his local machine.\n\n");
    printf("\tGithub: Youssof2025\n");
    printf("\tWebsite: youssof.live\n");
    printf("\n");
    
    choose_option();
    printf("\n");
}