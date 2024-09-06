#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    typedef struct Ranger
    {
        char color[10];
        int power;
        int speed;
    }Ranger;

    typedef struct SuperRanger
    {
        Ranger normal;
        char ability[15];
    }SuperRanger;
    
    SuperRanger Gold;
    strcpy(Gold.normal.color, "Gold");
    Gold.normal.power = 200;
    Gold.normal.speed = 250;
    strcpy(Gold.ability, "Teleportation");

    printf("%s\n", Gold.ability);
    printf("%s", Gold.normal.color);
    return 0;
}