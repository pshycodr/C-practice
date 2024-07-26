#include <stdio.h>

int main()
{

    float math, physics, it_system, mechanics;

    printf("enter the number you got in Math \n");
    scanf("%f", &math);
    printf("enter the number you got in physics \n");
    scanf("%f", &physics);
    printf("enter the number you got in it system \n");
    scanf("%f", &it_system);
    printf("enter the number you got in mechanics \n");
    scanf("%f", &mechanics);
    int t = (math + physics + it_system + mechanics);
    printf("Your total marks is : %d\n", t) char c = '%';
    int a = (math + physics + it_system + mechanics) / 4;
    printf("you got %d%c \n", a, c);
    if (a <= 100 && a >= 91)
    {
        printf("AA grade");
    }
    else if (a >= 81 && a <= 90)
    {
        printf("A grade");
    }
    else if (a >= 71 && a <= 80)
    {
        printf("B+ garde");
    }
    else if (a >= 61 && a <= 70)
    {
        printf("B garde");
    }
    else if (a >= 51 && a <= 60)
    {
        printf("C+ garde");
    }
    else if (a >= 40 && a <= 50)
    {
        printf("C garde");
    }
    else if (a <= 39 && a >= 0)
    {
        printf("D garde");
    }
    else
    {
        printf("Invalid marks");
    }

    return 0;
}