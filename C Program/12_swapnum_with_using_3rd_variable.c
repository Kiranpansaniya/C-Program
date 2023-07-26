#include<stdio.h>
void main()
{
	int a,b,temp=0;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	temp=a+b;	
	a=temp-a;
	b=a+b;
	
	printf("value of a : %d\n",a);
	printf("value of b : %d\n",b);
}
