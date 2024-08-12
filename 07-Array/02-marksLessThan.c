
/*
Ques: Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]
*/

#include <stdio.h>
int main()
{

    int arr[10] = {34, 56, 76, 23, 56, 79, 98, 54, 26, 78};

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] < 35)
            printf("the roll number is: %d \n", i);
    }

    return 0;
}