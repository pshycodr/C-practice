// this is to practice if else statmentes on c

// this is to identify even or odd number
// #include <stdio.h>

// int  main(){

//     int n;
//     printf("Enter a number :  ");
//     scanf("%d", &n);
//     if(n%2==0){ // Double equals to (==) means compare to
//         printf("enen number");
//     }
//     if(n%2!=0){ // '!=' this sign means not equals to
//         printf("odd number");
//     }
//     return 0;
// }





// 1. Ques : Take positive integer input and tell if it is divisible by 5 or not.
// #include <stdio.h>

// int main(){

//     int n;
//     printf(" enter a number :  ");
//     scanf("%d", &n);
//     if(n%5==0){
//         printf(" this number is Divisable with 5");
//     }
//     else{
//         printf("This number is Not Divisable with 5");
//     }
    

//     return 0;
// }








//HW : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
// #include <stdio.h>

// int main(){

//     int y;
//     printf("Enter a year : ");
//     scanf("%d", &y);
//     if(y%4==0){
//         printf(" this is a Leap Year");
//     }
//     else{
//         printf(" this is not a Leap year");
//     }

//     return 0;
// }






// Ques : If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>

int main(){

    int a,b;
    printf("Enter the cost price of the item : ");
    scanf("%d", &a);
    printf("Enter the selling price of the item : ");
    scanf("%d", &b);
    if(b>=a){
        printf("you made a profit of %d", b-a);
    }
    else{
        printf(" you incurred loss of %d", b-a);
    }


    return 0;
}