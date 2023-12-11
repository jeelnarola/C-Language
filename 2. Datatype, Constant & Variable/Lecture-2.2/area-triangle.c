#include<stdio.h>
int main(){
    int b,h,sum;

    printf("Enter A Height => ",h);
    scanf("%d",&h);

    printf("Enter A Base => ",b);
    scanf("%d",&b);
    
    sum=(h*b)/2;

    printf("Area Of A Triangle => %d",sum);
}