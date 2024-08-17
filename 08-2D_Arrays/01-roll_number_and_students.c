/*
Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.
*/


#include <stdio.h>

#define COLS 2
#define ROWS 4

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
            printf("(%d, %d): ", i,j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
        
    }
}

int main(){

    int arr[ROWS][COLS];

    store2Darr(arr);
    print2Darr(arr);

    return 0;
}