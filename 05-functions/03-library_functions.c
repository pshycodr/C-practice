#include <stdio.h>
#include <conio.h>
#include <math.h>

void print(int var){
    printf("%d", var);
}

int main(){

    int num, sr;
    printf("Enter a num: ");
    scanf("%d", &num);

    sr = sqrt(num);

    print(sr);
    getch();
    return 0;
}