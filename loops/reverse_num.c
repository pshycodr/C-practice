//Ques : WAP to print reverse of a given number.

#include <stdio.h>

int main()
{

    int num, reverse = 0;
    printf("enter a number : ");
    scanf("%d", &num);

    int i = 0;
    while (num > 0)
    {
        reverse *= 10;
        reverse += (num % 10);

        num /= 10;3
    }
    printf("the reverse number is : %d", reverse);

    return 0;
}