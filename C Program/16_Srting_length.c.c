#include<stdio.h>\
#include<string.h>
void main()
{
	char name[10];
	int i=0;
	
	printf("Enter the name : ");
	gets(name);
	
	while(name[i]!='\0')
	i++;
	{
		printf("\ntotal number of character = %d",i);
	}
	return 0;
	
}
