#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Ranger
{
    char color[10];
    int power;
    int speed;
} Ranger;

int func(Ranger R){
    R.power = 100;
}

int main()
{
    Ranger red;
    red.power = 500;
    printf("%d\n", red.power);
    func(red);
    printf("%d", red.power);

    return 0;
}

/*NOTES
1. To use custom veriable it need to be defined in a global scope
2. structures are passes by value
*/