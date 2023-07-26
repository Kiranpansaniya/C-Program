#include<stdio.h>
int main()
{

	char ch;
	
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	switch(ch)
		{
			case 'A':
				printf("Monday");
				break;
			case 'B':
				printf("Tuesday");
				break;
			case 'C':
				printf("Wednesday");
				break;
			case 'D':
				printf("Thursday");
				break;
			case 'E':
				printf("Friday");
				break;
			case 'F':
				printf("Satuerday");
				break;
			case 'G':
				printf("Sunday");
				break;
			default:
				printf("Please enter valid character");
				break;
		
			
		}
		return 0;
}
