#include <stdio.h>

int main()
{

    int count, p;
    float r, t, si;s
    for (count = 1; count <= 4; count++)
    {
        printf("enter your p,r,t : ");
        scanf("%d%f%f", &p, &r, &t);
        si = (p * r * t) / 100;
        printf(" Yor si is : %f", si);
    }

    return 0;
}