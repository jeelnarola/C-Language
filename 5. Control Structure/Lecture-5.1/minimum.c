
        // Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>
int main(){
    printf("find the minimum number from the given 2 numbers using");

    int a,b;
    printf("Enter a A number :-->");
    scanf("%d",&a);
    printf("Enter a B number :-->");
    scanf("%d",&b);

    if(a<b){
        printf("minimum number A :-->%d",a);
    }
    else{
        printf("minimum number B :-->%d",b);
    }
}