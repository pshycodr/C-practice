/*
wap to print pascal triangle
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1

*/

#include <stdio.h>

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main()
{
    int n;

    printf("Enter the Row: ");
    scanf("%d", &n);

    int icj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            icj = combination(i, j);
            printf(" %d", icj);
        }

        for (int j = 0; j < n-1-i; j++)
        {
            printf(" ");
        }
        printf("\n");
        
    }

    return 0;
}


