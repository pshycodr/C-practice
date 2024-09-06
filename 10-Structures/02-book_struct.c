/*
Ques : Create a structure type 'book' with name, price and number of pages as its attributes
*/


#include <stdio.h>
#include <string.h>

int main(){

    struct Book{
        char name[10];
        int price;
        int num_of_page;
    }a,b,c;

    strcpy(a.name, "Book1");
    a.num_of_page = 150;
    a.price = 200;

    printf("%s\n", a.name);
    printf("%d\n", a.num_of_page);
    printf("%d", a.price);

    return 0;
}