#include <stdio.h>
#include <conio.h>

int fibonacci(int n){
    if (n <= 1){
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n-2);

}

int main(){

    printf("%d",  fibonacci(20));

    getch();
    return 0;
}