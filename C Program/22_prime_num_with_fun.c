#include<stdio.h>
int prime(int num);

void main()
{
	int num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	prime(num);
	
}
int prime(int num)
{
	int i,k=0;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			k++;
		}
	}
	if(k==2)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
}
	


