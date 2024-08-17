/*
Ques : Write a program to transpose of
a matrix entered by the user. (Leetcode - 867)
*/
    
#include <stdio.h>

#define COLS 3
#define ROWS 2
#define line printf("\n")

int main()
{

    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6}};

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d ", arr[j][i]);
        }
        line;
    }

    line;

    return 0;
}