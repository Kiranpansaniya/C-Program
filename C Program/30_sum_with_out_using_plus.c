#include<stdio.h>
void main()
{
	int i,n1,n2;
	
	printf("Enter the n1 : ");
	scanf("%d",&n1);
	
	printf("\nEnter the n2 : ");
	scanf("%d",&n2);
	
	
	for(i=1;i<=n2;i++)
	{
		n1++;
	} 
	printf("sum is : %d",n1);
}
