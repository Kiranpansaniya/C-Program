#include<stdio.h>
void main()
{
	int num,r,sum=0,c;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	c=num;
	while(num>0)
	{
		r=num%10;
		sum=r*r*r+sum;
		num=num/10;
	}
	if(c==sum)
	{
		printf("Number is armstrong\n");
	}
	else
	{
		printf("number is not armstrong\n");
	}
	
}
