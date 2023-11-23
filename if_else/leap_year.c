//HW : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
#include <stdio.h>

int main(){

    int y;
    printf("Enter a year : ");
    scanf("%d", &y);
    if(y%4==0){
        printf(" this is a Leap Year");
    }
    else{
        printf(" this is not a Leap year");
    }

    return 0;
}
