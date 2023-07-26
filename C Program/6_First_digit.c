#include<stdio.h>
void main()
{
	int firstdigit,num;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	firstdigit=num;
	
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
	}
	printf("%d firstdigit is : %d",num,firstdigit);
}

