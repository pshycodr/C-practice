#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Ranger
{
    char color[10];
    int power;
    int speed;
} Ranger;

int change(Ranger *R) // pass by Refrence
{
    (*R).power = 100; // we need to use (*R) to access the pointer
    // (*R).speed = 300;
    R->speed = 300; // same as (*R).speed = 300;
    strcpy(R->color, "Maroon");
}

int main()
{
    Ranger red;
    red.power = 500;
    strcpy(red.color, "Red");
    red.speed = 200;

    printf("%d\n", red.power);
    printf("%d\n", red.speed);
    printf("%s\n", red.color);
    change(&red); // sending the address of red
    printf("%d\n", red.power);
    printf("%d\n", red.speed);
    printf("%s\n", red.color);

    return 0;
}
