#include<stdio.h>
int main()
{
	char m[20];
	int d,july;
	printf("month");
	scanf("%s",&m);
	printf("day");
	scanf("%d",&d);
	if (m==july||d==5)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
