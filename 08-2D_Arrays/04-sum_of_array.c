/*
Ques : Find the sum of a given matrix of nx m.
*/


#include <stdio.h>

#define COLS 2
#define ROWS 4
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

void store2Darr(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("(%d, %d): ", i,j);
            scanf("%d", &arr[i][j]);
        }
        line;
        
    }
}

int main(){

    int arr[ROWS][COLS];

    printf("Input array values: ");
    store2Darr(arr);
    line;
    print2Darr(arr);

    int sum=0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
        
    }

    line;
    printf("%d", sum);

    return 0;
}