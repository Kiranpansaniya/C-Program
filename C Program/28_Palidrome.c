#include<stdio.h>
void main()
{
	int r,sum=0,c,num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	c=num;
	
	while(num>0)
	{
		r=num%10;
		sum=r+(sum*10);
		num=num/10;
	}
	if(c==sum)
	{
		printf("number is palidrome");
	}
	else
	{
		printf("number is not palidrome");
	}
}
