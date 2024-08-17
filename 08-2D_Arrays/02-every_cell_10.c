/*
Ques : Write a program to store 10 at every index of
a 2D matrix with 5 rows and 5 columns.
*/



#include <stdio.h>

#define COLS 5
#define ROWS 5

void print2Darr(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
}

void store2Darr(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = 10;
        }
        
    }
}

int main(){

    int arr[ROWS][COLS];

    store2Darr(arr);
    print2Darr(arr);

    return 0;
}