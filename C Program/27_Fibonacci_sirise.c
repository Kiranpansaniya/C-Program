#include<stdio.h>
void main()
{
	int i,a=0,b=1,c,num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;		
	}
}
