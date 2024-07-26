//Qusetion: write all prime numbers between 1-100

#include <stdio.h>

int main(){

    int a,i,b;
    for(i=2; i<=100; i++)
    {
        a=0;
        for(b=2; b<=(i-1); b++)
        {
            if(i%b==0)
            {
                a=1;
                break;
            }
        }
        if(a==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}