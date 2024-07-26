/* *Ques : Print the given pattern

   * * * *
  * * * *
 * * * *
* * * * 

*/



#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

      for(int j=0; j<=n-i-1; j++){
        printf("  ");
      }

      for(int j=1; j<=n; j++){
        printf("* ");
      }
        printf("\n");
    }

    getch();
    return 0;
}