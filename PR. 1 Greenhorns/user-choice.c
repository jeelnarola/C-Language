// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.


#include<stdio.h>
int main(){
    int salary,HRA=10,DA=5,TA=8,sum;

    printf("Enter a User salary => ",salary);
    scanf("%d",&salary);
    printf("Value a HRA => %d\n",HRA);
    printf("Value a DA => %d\n",DA);
    printf("Value a TA => %d\n",TA);

    sum=salary+HRA+DA+TA;

    printf("ANS=> %d",sum);
}