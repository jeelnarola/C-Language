#include<stdio.h>
int main()
{
	int a,b,c;
	a=12;
	b=6;
	c=a+b;
	 printf("a = %d b = %d --> ",a,b);
	 printf("a+b=c %d+%d=%d\n",a,b,c);
	 c=a-b;
	 printf("a = %d b = %d --> ",a,b);
	 printf("a+b=c %d-%d=%d \n",a,b,c);
	 c=a*b;
	 printf("a = %d b = %d --> ",a,b);
	 printf("a+b=c %d*%d=%d \n",a,b,c);
	c=a/b;
	 printf("a = %d b = %d --> ",a,b);
	 printf("a+b=c %d/%d=%d \n",a,b,c);
	c=a%b;
	 printf("a = %d b = %d --> ",a,b);
	 printf(" %d",c);

}