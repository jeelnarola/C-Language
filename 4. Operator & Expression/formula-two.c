

// Q.4 Write a Program to find the formula's answer (x-y)^2.

#include<stdio.h>>
int main(){
    
    int x,y,ans;
    printf("Write a Program to find the formula's answer (x-y)^2.\n");

    printf("Enter a X value :-->");
    scanf("%d",&x);
    printf("Enter a Y value :-->");
    scanf("%d",&y);

    printf("formula (x-y)^2 \n");

    ans=(x*x)-(2*x*y)+(y*y); // 25-50+25 = 25-75 = 50

    printf("ANS :--> %d",ans);



}