
#include<stdio.h>
#include<string.h>

void main(){
    char name[] = "Vignesh";
    char lastName[] = "Kumar";
    char grade ='A';

    char names[20];

    char nm[] = {'V', 'I', 'N', 'E', 'S', 'H'};

    printf("%s\n", name);

    printf("%c\n", name[0]);

    for (int i =0; name[i] != '\0'; i++){
        printf("%c\n", name[i]);
    }

    // printf("Enter your name: ");
    // scanf("%s", names);
    // printf("Hello %s\n", names);

    // fgets(names, sizeof(names), stdin);
    // printf("Hello %s\n", names);

    int length = strlen(name);
    printf("Length = %d\n", length);

    strcpy(names, name);

    printf("%s\n", names);

    strcat(name, lastName);
    printf("%s\n", name);

    char name1[] = "Vignesh";
    char name2[] = "VigneshN";

    if(strcmp(name1, name2) == 0){
        printf("Strings are Equal\n");
    }
    else{
        printf("Strings are different\n");
    }

}