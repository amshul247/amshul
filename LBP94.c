#include<stdio.h>
int main()
{
	int num,digit,product=1;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		product*=digit;
		num/=10;
	}
	printf("%d",product);
}
