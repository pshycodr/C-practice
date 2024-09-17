#include <stdio.h>
#include <stdlib.h>

#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define RESET "\x1B[0m"

char Board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};
int choice;
int player = 1;
char mark;

void DisplayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board[i][j] == 'X')
                printf(" %s%c%s |", KRED, Board[i][j], RESET);
            else if (Board[i][j] == 'O')
                printf(" %s%c%s |", KGRN, Board[i][j], RESET);
            else
                printf(" %c |", Board[i][j]);
        }
        if (i < 2)
        {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}

void MarkBoard(char mark)
{
    if (choice == 1 && Board[0][0] == '1')
        Board[0][0] = mark;
    else if (choice == 2 && Board[0][1] == '2')
        Board[0][1] = mark;
    else if (choice == 3 && Board[0][2] == '3')
        Board[0][2] = mark;
    else if (choice == 4 && Board[1][0] == '4')
        Board[1][0] = mark;
    else if (choice == 5 && Board[1][1] == '5')
        Board[1][1] = mark;
    else if (choice == 6 && Board[1][2] == '6')
        Board[1][2] = mark;
    else if (choice == 7 && Board[2][0] == '7')
        Board[2][0] = mark;
    else if (choice == 8 && Board[2][1] == '8')
        Board[2][1] = mark;
    else if (choice == 9 && Board[2][2] == '9')
        Board[2][2] = mark;
    else
    {
        printf("Invalid Choice!! \n");
        player--;
    }
}

int WinCheck()
{
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2])
            return 1;
        if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i])
            return 1;
    }

    if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2])
        return 1;
    if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0])
        return 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board[i][j] != 'X' && Board[i][j] != 'O')
            {
                return -1;
            }
        }
    }

    return 0;
}

int main()
{
    int status = -1;

    while (status == -1)
    {
        system("cls");
        DisplayBoard();

        player = (player % 2) ? 1 : 2;

        printf("Player %d Enter Your Choice: ", player);
        scanf("%d", &choice);
        printf("\n");
        mark = (player % 2) ? 'X' : 'O';
        MarkBoard(mark);

        status = WinCheck();
        player++;
    }

    system("cls");
    DisplayBoard();

    if (status == 1)
    {
        printf("Player %d wins!!\n", --player);
    }
    else
    {
        printf("It's a Draw!\n");
    }

    return 0;
}
