#include <stdio.h>
#include <conio.h>

int SumOfDiits(int n){
    if (n == 1 || n == 0) return 0;

    return SumOfDiits(n/10) + n%10;
}

int main(){

    printf("%d", SumOfDiits(123));

    getch();
    return 0;
}