/*
Ques : Write a program to Print the transpose of
the matrix entered by the user. (Leetcode - 867)
*/



#include <stdio.h>

#define COLS 3
#define ROWS 3
#define line printf("\n")

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

void transpose(int arr[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = i; j < COLS; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }
}

int main(){

    int arr[ROWS][COLS] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print2Darr(arr);

    line;

    transpose(arr);
    print2Darr(arr);

    return 0;
}