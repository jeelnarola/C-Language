

// Q.2 Write a Program to find if a given number is neutral or not using a ladder if else
#include<stdio.h>
int main(){
    printf("find the minimum number from the given 2 numbers using");

    int a,b;
    printf("Enter a A number :-->");
    scanf("%d",&a);

    if(a==0){
        printf("This number is Neutral");
    }
    else if(a>0){
        printf("This number is Positive");
    }
    else{
        printf("This number is Negative");
    }
}