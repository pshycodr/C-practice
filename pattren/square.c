#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}