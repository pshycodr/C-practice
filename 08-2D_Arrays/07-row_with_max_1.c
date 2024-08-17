/*
Ques : Given a matrix having 0-1 only, find the
row with the maximum number of I's.
*/

#include <stdio.h>

#define ROWS 5
#define COLS 6
#define line printf("\n")

void print2Darr(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        line;
    }
}

int main()
{

    int arr[ROWS][COLS] = {
        {1, 0, 1, 1, 0, 1},
        {0, 1, 1, 0, 1, 0},
        {1, 1, 1, 0, 1, 1},
        {0, 0, 1, 1, 0, 1},
        {1, 1, 0, 0, 1, 0}
    };

    line;
    print2Darr(arr);

    int maxCount = 0;
    int r;
    for (int i = 0; i < ROWS; i++)
    {
        int count = 0;
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == 1)
                count ++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            r = i;
        }
    }

    line;
    printf("%d", r);

    return 0;
}