/* HW : Print the given pattern

*   *
 * * 
  *  
 * * 
*   *

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int a, n, b = 1, c = n;
    printf("Enter a num : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                if (j == i || j == n - i)
                    printf("*");
                else
                    printf(" ");
            }

            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == i || i + j == n + 1)
                    printf("*");
                else
                    printf(" ");
            }

            printf("\n");
        }
    }

    getch();
    return 0;
}