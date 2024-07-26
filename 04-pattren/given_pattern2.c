/*Ques : Print the given pattern

* * * *
* * *
* *
*

*/

#include <stdio.h>
#include <conio.h>

int main(){

     int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("* ");
            
        }
        printf("\n");
    }

    getch();
    return 0;
}