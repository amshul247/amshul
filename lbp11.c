#include<stdio.h>
int main()
{
	int a,area;
	printf("enter the side of e triangle:");
	scanf("%d",&a);
	area=(sqrt(3)/4)* (a*a);
	printf("the area of equilateral triangle is:%d",area);
	return 0;
}
