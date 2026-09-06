// for(initialization; condition; increment/decrement){
//     //code
// }


#include<stdio.h>

void main(){
    for(int i = 1; i <= 10; i++){
        if(i == 2){
            printf("%d\n", i);
            // break;
            continue;
        }
        printf("%d\n", i);
    }
}