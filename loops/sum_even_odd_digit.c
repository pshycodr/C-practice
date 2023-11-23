// HW : WAP to print sum of all the even digits of a given number.

#include <stdio.h>

int main()
{

    int num, sum = 0, odd = 0;
    printf("Enter your number : ");
    scanf("%d", &num);

    int i = 0;
    while (num != 0)
    {
        int x = num % 10;
        if (x % 2 == 0)
        {
            sum += x;
            num /= 10;
        }
        else
        {
            odd += x;
            num /= 10;
        }
    }
    printf("sum of even digits in the number is = %d", sum);
    printf("\n");
    printf("sum of odd digits in the number is = %d", odd);
    return 0;
}