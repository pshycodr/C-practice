/*Ques : Print the given pattern

1 2 3 4
1 2 3
1 2
1

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for (int i = row; i >= 1; i--)
    {
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    getch();
    return 0;
}