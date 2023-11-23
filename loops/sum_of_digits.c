//Ques : WAP to print sum of digits of a given number.


#include <stdio.h>

int main(){

    int num, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &num);

   int i = 0;
   while(num != 0){
    sum += (num % 10);
    num /= 10;
   }

   printf("%d", sum);

    return 0;
}