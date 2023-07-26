#include<stdio.h>
void main()
{
	int num1,num2;
	
	printf("Enter the num1 : ");
	scanf("%d",&num1);
	
	printf("Enter the num2 : ");
	scanf("%d",&num2);
	
	switch(num1>num2)
	{
		case 0:
			printf("%d is maximum",num2);
			break;
		case 1:
			printf("%d is maximum",num1);
			break;
	}
}
