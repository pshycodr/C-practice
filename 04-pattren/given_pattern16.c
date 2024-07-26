

/* *Ques : Print the given pattern

      A
    A B
  A B C
A B C D

*/


#include <stdio.h>
#include <conio.h>

int main(){

     int rows, a;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        a=65;
        for(int j=1; j<=rows-i; j++){
            
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            
            printf("%c ", a);
            a++;
        }
        
        printf("\n");
    }

    getch();
    return 0;
}