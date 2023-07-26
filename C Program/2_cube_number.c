#include<stdio.h>
void main()
{
	int num,sum=0,cube=0,i;
	
	for(i=1;i<=3;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&num);
		
		cube=num*num*num;
		
		printf("%d Cube is : %d\n",num,cube);
		sum+=cube;
	}
	printf("Total cube of sum is : %d",sum);
	
}
