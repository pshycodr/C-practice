#include <stdio.h>
int main(){

    struct pokemon // user specified data type (pokemon)
    {
        char* type;
        int hp;
        int power;
    };

    struct pokemon pikachu;
    pikachu.hp = 100;
    pikachu.type = "Electric";
    pikachu.power = 150;
    
    printf("%d", pikachu.hp);

    return 0;
}