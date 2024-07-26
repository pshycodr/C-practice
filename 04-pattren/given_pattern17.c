/* *Ques : Print the given pattern

      *
    * * *
  * * * * *
* * * * * * *

*/


 #include <stdio.h>
#include <conio.h>

int main(){

     int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(int i=row; i<=row; i++){
        for(int j=1; j<=i-1; j++){
            printf("0 ");
            
        }

        // for(int j=i; j<=row-1; j++){
        //     printf("0 ");
            
        // }

        printf("\n");
    }

    getch();
    return 0;
}