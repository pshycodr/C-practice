/* HW : Print the given pattern

* * * * * *
*         *
*         *
* * * * * *

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int a, n, b;
    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("Enter a number of coloms : ");
    scanf("%d", &b);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == 1 || j==1||j == b || i==n)
                printf("* ");
            else
                printf("  ");
        }
        ;
        printf("\n");
    }

    getch();
    return 0;
}