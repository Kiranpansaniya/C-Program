#include<stdio.h>
void swap(int x,int y)
{
	int temp;

	temp=x;
	x=y;
	y=temp;
	printf("after swapping : x=%d y=%d\n",x,y);
}
main()
{
	int a,b;

	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B :");
	scanf("%d",&b);
	
	printf("before swapping : a=%d b=%d\n",a,b);
	swap(a,b);
	return 0;
}

