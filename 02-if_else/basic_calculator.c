
#include <stdio.h>

int main()
{

    double x, y;
    printf("--> ");
    scanf("%lf", &x);
    printf("--> ");
    scanf("%lf", &y);
    char op;
    printf("Enter your operatior --> + - * / \n");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("%lf + %lf = %lf", x, y, x + y);
        break;
    case '-':
        printf("%lf - %lf = %lf", x, y, x - y);
        break;
    case '*':
        printf("%lf * %lf = %lf", x, y, x * y);
        break;
    case '/':
        printf("%lf / %lf = %lf", x, y, x / y);
        break;
    }
    return 0;
}