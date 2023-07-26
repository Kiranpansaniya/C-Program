#include<stdio.h>
int even(num)
{
	return(num%2==0);
}
int main()
{
	int num,e;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	//e=even(num);
	
	if(even(num))
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	return 0;
}


