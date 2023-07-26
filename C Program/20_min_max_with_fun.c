#include<stdio.h>
int min(int num1,int num2);
int max(int num1,int num2);

int min(int num1,int num2)
{
	return(num1>num2)?num2:num1;
}
int max(int num1,int num2)
{
	return(num1>num2)?num1:num2;
}
int main()
{
	int num1,num2,maximum,minimum;
	
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	
	minimum=min(num1,num2);
	maximum=max(num1,num2);
	
	printf("\nminimum is : %d",minimum);
	printf("\nmaximum is : %d",maximum);
	return 0;
}
