/*
Ques : Write a program to add two matrices.
*/


#include <stdio.h>

#define COLS 4
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

void addMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int add[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main(){

    int arr1[ROWS][COLS];
    int arr2[ROWS][COLS];
    int add[ROWS][COLS];

    printf("Store Matrix A: \n");
    store2Darr(arr1);
    printf("Matrix A: \n");
    print2Darr(arr1);

    printf("Store Matrix B: \n");
    store2Darr(arr2);
    printf("Matrix B: \n");
    print2Darr(arr2);
    
    addMatrix(arr1, arr2, add);

    printf("\n");
    printf("Added Matrix: \n");
    print2Darr(add);


    return 0;
}