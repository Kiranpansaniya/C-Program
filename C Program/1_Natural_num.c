#include<stdio.h>
void main()
{
	int i,num,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		sum+=i;
	}
	printf("natural number sum is : %d",sum);
}
