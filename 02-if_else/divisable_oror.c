//Ques : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.


#include <stdio.h>

int main()
{

    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if(n%3==0 || n%5==0)
    {
        if(n%15!=0)
        {
            printf("it is divisible by 5 or 3 but not divisible by 15.");
        }
        else
        {
            printf("it is divisable with 3,5 and 15");
        }
    }
    else
    {
        printf("not divisable with 3 and 5");
    }

    return 0;
}