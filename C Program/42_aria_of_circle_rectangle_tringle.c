#include<stdio.h>
void main()
{
	int r,l,b,a,h;
	float area;
	
	printf("enter value of r : ");
	scanf("%d",&r);
	
	area=3.14*r*r;
	
	printf("area of circle : %f",area);
	
	
	printf("\nenter value of l : ");
	scanf("%d",&l);
	
	printf("enter value of b : ");
	scanf("%d",&b);
	
	a=l*b;
	
	printf("\narea of rectangle : %d",a);
	
	printf("\nenter value of h : ");
	scanf("%d",&h);
	
	printf("enter value of b : ");
	scanf("%d",&b);
	
	area=0.5*h*b;
	
	printf("\narea of triangle : %f",area);
			
}

