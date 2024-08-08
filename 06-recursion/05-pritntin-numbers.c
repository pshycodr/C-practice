#include <stdio.h>
#include <conio.h>

void nums(int n){
    if (n < 1){
        return;
    }

   nums(n-1);
   printf("%d\n", n);
}

int main(){

    nums(5);
    getch();
    return 0;
}