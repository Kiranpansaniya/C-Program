#include<stdio.h>
int main()
{
	int i,sum=0;
	char s[100];
	
	printf("Enter the string : ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
			sum+=s[i];
		}
	}
	printf("\nLower case string is : %s",s);
	printf("\ntotal name value sum is : %d",sum);
	return 0;
}
