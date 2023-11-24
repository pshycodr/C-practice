#include <stdio.h>
#include <conio.h>

int main()
{

    int num, fact = 1;
    printf("Enter a number: ");

    scanf("%d", &num);
    // int i = num;
    // while (i > 0)
    // {
    //     fact *= i;
    //     i--;
    // }
    

    for(int i=1; i<=num; i++){
        fact *=i;
    }
    printf("factorial of %d is: %d ", num, fact);

    getch();
    return 0;
}