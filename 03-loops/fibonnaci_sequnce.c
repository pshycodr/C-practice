#include <stdio.h>

int main()
{

    int f1, f2, f3, n;
    f1 = 0;
    f2 = 1;
    printf("how many numbers you want to print in from the sequence : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%d ", f2);
    }

    return 0;
}