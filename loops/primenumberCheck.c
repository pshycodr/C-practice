// Qus:- check the number is prime or not

#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
        }
    }
    if (a == 0)
        printf("The nummber is prime");
    else
        printf("The number is composite");

    return 0;
}