/*
HW : Given a matrix 'a' of dimension n x m and 2
coordinates (II, rl) and (12, r2). Return the sum of
the rectangle from (Il,rl) to (12, r2).
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

    int i1 = 1, r1 = 1, i2 = 2, r2 = 2;

    line;
    print2Darr(arr);

    int sum=0;
    for (int i = r1; i <= r2; i++)
    {
        for (int j = i1; j <= i2; j++)
        {
            sum += arr[i][j];
        }
        
    }

    line;
    printf("%d", sum);

    return 0;
}