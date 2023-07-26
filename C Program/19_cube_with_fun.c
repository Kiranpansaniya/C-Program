#include<stdio.h>
findcube(int n)
{
	return(n*n*n);
}
int main()
{
	int n,c;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	c=findcube(n);
	
	printf("The cube is : %d",c);
	return 0;
}
