
// Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book
#include<stdio.h>
int main(){

    int a,b,c,d;
    printf("Enter a A number :-->");
    scanf("%d",&a);
    printf("Enter a B number :-->");
    scanf("%d",&b);
    printf("Enter a C number :-->");
    scanf("%d",&c);
    printf("Enter a D number :-->");
    scanf("%d",&d);
    
    if(a>b){
        if(a>c){
            if(a>d){
                printf("A Number Is Max...:-->%d",a);
            }else{
             printf("D Number Is Max...:-->%d",d);   
            }
        }else{
            if(c>d){
                printf("C Number Is Max...:-->%d",c);
            }
            else{
                printf("D Number Is Max...:-->%d",d);

            }
        }
    }else{
        if(b>c){
            if(b>d){
                printf("B Number Is Max...:-->%d",b);
            }
            else{
                printf("D Number Is Max...:-->%d",d);
            }
        }else{
            if(c>d){
                printf("C Number Is Max...:-->%d",c);
            }else{
                printf("D Number Is Max...:-->%d",d);
            }
        }

    }
}