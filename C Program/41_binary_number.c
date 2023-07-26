#include<stdio.h>
void main()
{
	int i,n;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n%10;
		if(n==0)
		{
			printf("number is binary");
			break;
		}
		else
		{
			printf("number is not binary");
			break;
		}	
	}
}
