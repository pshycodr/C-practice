//Ques : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include <stdio.h>

int main(){

    int l, b;
    printf("Enter the length of the rectriangle : ");
    scanf("%d", &l);
       printf("Enter the Breadth of the rectriangle : ");
    scanf("%d", &b);
    int a,p;
    a = l * b;
    p = 2*(l + b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is less than perimeter");
    }
    // if(a<p){
    //     printf("area is less than perimeter");
    // }
    // if(a==b){
    //     ptintf("area is equals to permiter, and for that it no longer a rectriangle, it became a square");
    // }

    return 0;
}