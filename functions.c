#include<stdio.h>


void add(int a, int b){
    printf("%d\n", a+b);
}

int addN(int a, int b){
    int c = a+b;
    return c;
}




void main(){

    // add(100,200);
    // add(300,400);
    // add(121,123);

    int result = addN(100,121);
    printf("%d\n", result);

    if(result %2 == 0 ){
        printf("Even Number\n");
    }else{
        printf("Odd Number\n");
    }

}