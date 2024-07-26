// Ques : Given three points (xl, YI), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>

int main()
{

    double x1, x2, x3, y1, y2, y3;
    printf("enter (x1,y1) cordinates : \n");
    scanf("%lf%lf", &x1, &y1);
    printf("enter (x2,y2) cordinates : \n");
    scanf("%lf%lf", &x2, &y2);
    printf("enter (x3,y3) cordinates : \n");
    scanf("%lf%lf", &x3, &y3);
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("this is a straight line");
    }
    else
    {
        printf("this is a not straight line");
    }

    return 0;
}
