#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,max,min;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nmax number is : %d",max);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nmin number is : %d",min);
}
