
// Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float c,f;

    printf("Enter a Celsius => ",c);
    scanf("%f",&c);

    f=(c * 9/5 ) + 32;

    printf("Celsius To Fahrenheit => %.1f",f);
}