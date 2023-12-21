
// Q.1 Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter a A number :-->");
    scanf("%d",&a);
    printf("Enter a B number :-->");
    scanf("%d",&b);
    printf("Enter a C number :-->");
    scanf("%d",&c);

    (a<b)?
        (a<c)
            ?
            printf("A Number Is Min...")
            :
            printf("C Number Is Min...")
    :
    (b<c)
        ?
            printf("B Number Is Min...")
        :
            printf("C Number Is Min...");     
}

