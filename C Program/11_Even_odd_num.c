#include<stdio.h>
void main()
{
	int odd=0,even=0,num,i,sum_odd=0,sum_even=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the number : ");
		scanf("%d",&num);
			if(num%2==0)
			{
				printf("%d number is even\n",num);
				even++;
				sum_even+=num;
			}
			else
			{
				printf("%d number is odd\n",num);
				odd++;
				sum_odd+=num;
			}
	}
printf("total even number is : %d\n",even);
printf("total odd number is : %d\n",odd);
printf("sum of even number is : %d\n",sum_even);
printf("sum of odd number is : %d\n",sum_odd);
}
