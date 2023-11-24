/* HW : Write a program to print out all Armstrong
numbers between 1 and 500. If sum of cubes of
each digit of the number is equal to the number
itself, then the number is called an Armstrong
number. For example, 153 = (1 *1 *1) + (5 *5 *5) + (3 *3 *3) */

#include <stdio.h>
#include <conio.h>

int main()
{

    int num, m = 1, a;
    for (int i = 1; i <= 500; i++)
    {
        a = 0;
        int temp = i;
        while (temp > 0)
        {
            num = temp % 10;
            m = num * num * num;
            a += m;
            temp /= 10;
        }
        if (i == a)
        {
            printf("%d\n", i);
        }
    }

    getch();
    return 0;
}