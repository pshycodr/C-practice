/*Ques : Print the given pattern

1
A B
1 2 3
A B C D
1 2 3 4 5

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
        {
            int num = 65;
            for (int j = 1; j <= i; j++)
            {
                char ch = (char)num;
                printf("%c ", ch);
                num++;
            }
            printf("\n");
        }
        else
        {
            int num = 1;
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }

    getch();
    return 0;
}