#include <stdio.h>

int main()
{

    int x, y, z;
    printf("Enter the base number : ");
    scanf("%d", &x);
    printf("Enter the power : ");
    scanf("%d", &y);
    z = 1;
    for (int i = 1; i <= y; i++)
    {
        z = z * x;
    }
    printf("the answer is : %d", z);

    return 0;
}
