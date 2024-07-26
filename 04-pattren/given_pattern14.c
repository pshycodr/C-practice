

/* *Ques : Print the given pattern

      *
    * *
  * * *
* * * *

*/

#include <stdio.h>
#include <conio.h>

int main()
{

    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){

        for(int j=1; j<=rows-i; j++){
            
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            
            printf("* ");
        }
        
        printf("\n");
    }

    getch();
    return 0;
}