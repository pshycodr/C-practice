
// Ques : If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>

int main(){

    int a,b;
    printf("Enter the cost price of the item : ");
    scanf("%d", &a);
    printf("Enter the selling price of the item : ");
    scanf("%d", &b);
    if(b>a){
        printf("you made a profit of %d", b-a);
    }
    if(b<a){
        printf(" you incurred loss of %d", b-a);
    }
    if(b==a){
        printf("no profit, no loss");
    }


    return 0;
}