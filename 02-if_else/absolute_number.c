// 1. Ques : Take positive integer input and tell if it is divisible by 5 or not.
#include <stdio.h>

int main(){

    int n;
    printf(" enter a number :  ");
    scanf("%d", &n);
    if(n%5==0){
        printf(" this number is Divisable with 5");
    }
    else{
        printf("This number is Not Divisable with 5");
    }
    

    return 0;
}