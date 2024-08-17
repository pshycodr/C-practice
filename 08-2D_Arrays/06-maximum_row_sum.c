/*
Homework : Write a program to print the row
number having the maximum sum in a given
matrix.
*/

#include <stdio.h>

#define ROWS 5
#define COLS 6
#define line printf("\n")

void print2Darr(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        line;
        
    }
}


int main(){

    int arr[ROWS][COLS] = {
        {  1,  2,  3,  4,  5,  6},
        {  7,  8,  9, 10, 11, 12},
        { 13, 14, 15, 16, 17, 18},
        { 19, 20, 21, 22, 23, 24},
        { 25, 26, 27, 28, 29, 30}
    };



    line;
    print2Darr(arr);

    int maxSum=0;
    int r;
    for (int i = 0; i < ROWS; i++)
    {
        int rowSum=0;
        for (int j = 0; j < COLS; j++)
        {
            rowSum += arr[i][j];   
        }

        if (rowSum > maxSum)
        {
            maxSum=rowSum;
            r=i;
        }
        
    }

    line;
    printf("%d", r);

    return 0;
}