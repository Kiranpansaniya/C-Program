#include<stdio.h>
void naturalno(int n);
main()
{
	int n=1;
	naturalno(n);
}
void naturalno(int n)
{
	if(n<=10)
	{
		int sum=0;
		printf("natural no is : %d\n",n);
		naturalno(n+1);
		sum+=n*(n+1)/2;
		printf("\nsum is : %d",sum);
	}
}
	

