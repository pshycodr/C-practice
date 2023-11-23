#include <stdio.h>

int main(){

    int n;
    printf("Enter the tempature : ");
    scanf("%d", &n);
    char temp;
    printf("Celcius or Fahrenhite (C/F) : ");
    scanf(" %c", &temp);
    switch (temp)
    {
    case 'F':
    case 'f':
    printf("The tempature in celcius is : %f C",(n - 32.0) * 5.0 / 9.0);
        break;
    case 'C':
    case 'c':
    printf("The tempature in fahrenhite is : %f F",(n * 9.0 / 5.0) + 32.0);
    break;
    default:
    printf("invalid input");
    }

    return 0;
}