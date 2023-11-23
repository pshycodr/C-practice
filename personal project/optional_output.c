#include <stdio.h>

int main()
{

    int num, a;
    a = 1;
    printf("Enter any number : ");
    scanf("%d", &num);
     printf("\n");
    int opt;
    printf("1. Multiplication Table\n");
    printf("2. Power of that number\n");
    // printf("wlii be added soon...\n");
    // printf("wlii be added soon...\n");
    printf("\n");
    printf("Chose an option : ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        for (int i1 = 1; i1 = 1; i1 = i1 + 0)
        {
            for (int j1 = 1; j1 <= 100; j1++)
            {
                printf("%d * %d = %d\n", num, j1, num * j1);
            }
            break;
        }
        break;
    case 2:
        for (int i2 = 1; i2 <= 1; i2++)
        {
            for (int j2 = 1; j2 <= 10; j2++)
            {
                a = a * num;
                printf("%d to the power %d = %d\n", num, j2, a);
            }
            break;
        }

    default:
        break;
    }

    return 0;
}