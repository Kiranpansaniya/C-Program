#include<stdio.h>
void main()
{
	int i,rem=0,num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		rem=num%10;
	}
	printf("%d last digit is : %d",num,rem);
}
