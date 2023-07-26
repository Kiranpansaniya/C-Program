#include<stdio.h>
void main()
{
	int n,m;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	m=n/2;
	
	if(m*2==n)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
}
