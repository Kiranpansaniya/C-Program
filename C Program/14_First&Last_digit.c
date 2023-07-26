#include<stdio.h>
void main()
{
	int i,num,firstdigit,lastdigit;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	firstdigit=num;
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
	}
	printf("firstdigit num is : %d\n",firstdigit);
	
		lastdigit=num%10;
	
	printf("Lastdigit num is : %d\n",lastdigit);
    printf("Sum of lastdigit and firstdigit is : %d",firstdigit+lastdigit);
}
