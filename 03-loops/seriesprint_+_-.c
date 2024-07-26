//Ques : Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6... upto n term.

#include <stdio.h>

int main(){

    int num, series=0;
    printf("Enter the series length : ");
    scanf("%d", &num);

    for(int i=0; i<=num; i++){
        if(i%2==0){
            series-=i;
        }
        else{
            series+=i;
        }
    }
    printf("sum of the series is : %d", series); 

    return 0;
}