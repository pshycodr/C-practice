// Ques : Take 3 numbers input and tell if they can be the sides of a triangle.

#include <stdio.h>

int main()
{
    
    int a,b,c,d;
    printf("Enter the 1st side : ");
    scanf("%d", &a);
     printf("Enter the 2nd side : ");
    scanf("%d", &b);
      printf("Enter the 3rd side : ");
    scanf("%d", &c);

// we know that in a triangle, sum of any two sides is grater than the other side

    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("these sides can form a triangle");
    }
    else
    {
        printf("These sides cann't form a triangle");
    }
   
    return 0;
}