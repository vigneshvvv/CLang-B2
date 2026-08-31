#include <stdio.h>

void main(){
    int day = 2;

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    default:
        printf("INvalid");
        break;
    }
}