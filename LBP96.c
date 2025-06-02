#include<stdio.h>
int isprime(int n)
{
	return (n==2||n==3||n==5||n==7||n==1||n==0);
}
int main()
{
	int num,sum=0,digit;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(!isprime(digit))
			sum+=digit;
		num/=10;
	}
	printf("%d",sum);
}
