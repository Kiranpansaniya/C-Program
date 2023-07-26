#include<stdio.h>
void main()
{
	int count=0,i,num,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("factors of %d are: \n",num);
	
	for(count=1;count<=num;count++)
	{
		if(num%count==0)
		{
			printf("%d\n",count);
			sum+=count;
		}
	}
printf("Sum of the factor is : %d",sum);
}
