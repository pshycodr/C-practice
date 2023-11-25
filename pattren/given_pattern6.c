/*Ques : Print the given pattern

A B C D
A B C D
A B C D
A B C D

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
        int num = 65;
        for (int j = 1; j <= row; j++)
        {
            char ch = (char)num;
            printf("%c ", ch);
            num++;
        }
        printf("\n");
    }

    getch();
    return 0;
}