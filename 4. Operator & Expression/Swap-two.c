#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Write a Program to Swap two variables using the third variable.\n");

    printf("Enater a A number :->");
    scanf("%d",&a);
    printf("Enater a B number :->");
    scanf("%d",&b);

    printf("Swap A Number use Third Variable :-> \n");

    c=a;
    a=b;
    b=c;

    printf("ANS :--> a=%d,b=%d",a,b);



}