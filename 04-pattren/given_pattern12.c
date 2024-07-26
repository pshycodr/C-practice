/* Ques : Print the given pattern
1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    int num = 1;
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("%d ", num);
            num += 1;
        }
        printf("\n");
    }

    getch();
    return 0;
}