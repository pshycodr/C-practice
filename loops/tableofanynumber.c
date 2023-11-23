#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("the table of %d is : \n", n);
    for (int i = n; i <= 190; i = i + n)
    {

        printf("%d ", i);
    }

    return 0;
}