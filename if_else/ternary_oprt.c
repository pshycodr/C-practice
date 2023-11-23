// this is to identify even or odd number using ternary operator
#include <stdio.h>

int  main(){

    int n;
    printf("Enter a number :  ");
    scanf("%d", &n);
// format of the operator -->  exp1 ? exp2 : exp3 ;

    n%2==0 ? printf("enen number") : printf("odd number");

    // if(n%2==0){
    //     printf("enen number");
    // }
    // if(n%2!=0){
    //     printf("odd number");
    // }
    return 0;
}