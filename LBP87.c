#include<stdio.h>
int main()
{
	int num,tens,units,sum,product;
	scanf("%d",&num);
	tens=num/10;
	units=num%10;
	sum=units+tens;
	product=units*tens;
	if(sum+product==num)
		printf("yes");
	else
		printf("no");
}
