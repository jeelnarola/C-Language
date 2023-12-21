
// Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.

#include<stdio.h>
int main(){
    printf("find the minimum number from the given 3 numbers using \n");

    int a,b,c;
    printf("Enter a A number :-->");
    scanf("%d",&a);
    printf("Enter a B number :-->");
    scanf("%d",&b);
    printf("Enter a C number :-->");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("A Number Is Min...");
        }else{
            printf("C Number Is Min...");
        }
    }else{
        if(b<c){
            printf("B Number Is Min...");
        }else{
            printf("C Number Is Min...");
        }
    }
}