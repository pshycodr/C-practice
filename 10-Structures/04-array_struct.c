#include <stdio.h>
#include <string.h>

int main(){

    typedef struct Ranger
    {
        char color[10];
        int power;
        int speed;
    } Ranger;
    
    Ranger arr[3];
    strcpy(arr[0].color, "Red");
    arr[0].power = 150;
    arr[0].speed = 100;

    strcpy(arr[1].color, "Blue");
    arr[1].power = 120;
    arr[1].speed = 80;

    strcpy(arr[2].color, "Pink");
    arr[2].power = 80;
    arr[2].speed = 150;

    for (int i = 0; i < 3; i++)
    {
        printf("Color = %s\n", arr[i].color);
        printf("Power = %d\n", arr[i].power);
        printf("Speed = %d \n\n", arr[i].speed);
    }
    

    return 0;
}