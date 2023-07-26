#include<stdio.h>
#include<conio.h>
int spacedigit();
void main()
{
	spacedigit();
}
int spacedigit()
{
	char name[30];
	int i,d=0,c=0,ch=0,capital=0,small=0;
	
	
	printf("\n\n.....Enter the name and find out how many blank space and how many latter of this name.....\n");
	
	fflush(stdin);
	printf("\nenter the name : ");
	gets(name);
	
	
	for(i=0;name[i]!='\0';i++)
	{
	
		if(name[i]==' ')
		{
			c++;			
		}
		else if(name[i]>'0' && name[i]<'9')
		{
			d++;
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			capital++;
		}
		else
		{
			small++;
		}
	}
	printf("\nspace is %d",c);
	printf("\ndigit is %d",d);
	printf("\ncapital character is %d",capital);
	printf("\nsmall character is %d",small);
	return 0;
}

