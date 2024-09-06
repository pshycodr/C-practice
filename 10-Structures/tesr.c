#include <stdio.h>
#include <string.h>

int main(){

    struct pokemon // user specified data type (pokemon)
    {
        char type[10];
        int hp;
        int power;
    };

    struct legendry
    {
        int special_power;
        struct pokemon x;
        
    };
    

    struct pokemon pikachu;
    pikachu.hp = 100;
    strcpy(pikachu.type, "Electric");
    pikachu.power = 150;
    
    printf("%d", pikachu.hp);

    return 0;
}