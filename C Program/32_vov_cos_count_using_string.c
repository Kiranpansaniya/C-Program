#include<stdio.h>
void main()
{
	int i,a,vov=0,con=0;
	char name[15];
	
	printf("Enter the name : ");
	gets(name);
	
	
	a=strlen(name);
		
	printf("\nThe number of charater len is : %d",a);
	
	
	for(i=1;i<=a;i++)
	{
		if(name[i]=='a'|| name[i]=='e'|| name[i]=='i' || name[i]=='o' || name[i]=='u'|| name[i]=='A'|| name[i]=='E'|| name[i]=='I' || name[i]=='O' || name[i]=='U')
		{
			vov++;
		}
		else
		{
			con++;
		}
	}
	printf("\ntotal vov is : %d",vov);
	printf("\ntotal con is : %d",con);
}
