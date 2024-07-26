//Ques : Take positive integer input and tell if it is divisible by 5 and 3.

#include <stdio.h>

int main(){

    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if(n%3==0 && n%5==0){
        printf("the number is divisable by 5 and 3");
    }
    else{
        printf("the number is not divisable by 5 and 3");
    }
    getchar;
   return 0;
}