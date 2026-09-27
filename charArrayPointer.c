#include<stdio.h>

void main(){
    char name[] = "Vignesh";

    char *p = name;

    while(*p != '\0'){
        printf("%c\n", *p);
        p++;
    }
}