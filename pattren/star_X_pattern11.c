/* HW : Print the given pattern

*    *
 * *
  *
 *  *
*    *

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int a, n, b = 1, c = n;
    printf("Enter a num : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j==n-i)
                printf("*");
            else
                printf(" ");
        }
        b++;
        
        printf("\n");
    }

    getch();
    return 0;
}