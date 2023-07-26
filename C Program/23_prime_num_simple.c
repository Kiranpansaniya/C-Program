#include<stdio.h>
void main()
{
	int i,num,k=0;
	
	printf("enter the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			k++;
		}
	}
	if(k==2)
	{
		printf("prime no");
	}
	else
	{
		printf("not prime");
	}
}
