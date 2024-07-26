#include <stdio.h>
#include <conio.h>

int main()
{

    int a, n,b;
    printf("Enter a num : ");
    scanf("%d", &n);
    b = (n / 2) + 1;
    for (int i = 1; i <= n; i++)
    {

        a = 1;
        for (int j = 1; j <= n; j++)

        {

            if (j == b || i == b)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}