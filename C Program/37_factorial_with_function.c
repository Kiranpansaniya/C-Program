#include<stdio.h>
int fact(int a);

void main()
{
	int a,ans;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	ans=fact(a);
	printf("factorial is = %d",ans);
		
}
int fact(int a)
{
	int i,fact=1;
	
	for(i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}
