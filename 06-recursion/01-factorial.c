#include <stdio.h>
#include <conio.h>

int facto(int n){
    if(n <=1) return 1; // Base Case
   return n * facto(n-1); // recursive call
}

int main(){

    int n = 5;
    int ans = facto(n);
    
    printf("%d", ans);

    getch();
    return 0;
}
