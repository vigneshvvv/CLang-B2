#include<stdio.h>
#include<string.h>

void main(){
    char str[50];

    printf("Enter a String: ");
    scanf("%s", str);

    int length = strlen(str);

    for(int i =length-1; i >= 0; i--){
        printf("%c\n", str[i]);
    }
}