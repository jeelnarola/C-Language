

// Q.2 Write a Program to Swap two variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Write a Program to Swap two variables without using a third variable.\n");
    
    printf("Enater a A number :->");
    scanf("%d",&a);
    printf("Enater a B number :->");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("===========  ANS  ===========\n");

    printf("A=%d\n",a);
    printf("B=%d",b);
    
}