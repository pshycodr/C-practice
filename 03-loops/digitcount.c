// Q: Ques : WAP to count digits of a given number.

#include <stdio.h>

int main(){

    int n,count;
    printf("Enter your digit : ");
    scanf("%d", &n);
    count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
       
    }
     printf("%d", count);

    return 0;
}