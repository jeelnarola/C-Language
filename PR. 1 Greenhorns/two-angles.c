// Write C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>
int main(){
    int Third,first,Second;

    printf("Enter a User salary => ",first);
    scanf("%d",&first);
    printf("Enter a User salary => ",Second);
    scanf("%d",&Second);
    Third=180-first-Second;

    printf("Third angle=> %d",Third);
}