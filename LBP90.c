#include<stdio.h>
int isprime(int n)
{
	return (n==2||n==3||n==5||n==7);
}
int main()
{
	int n,firstdigit;
	scanf("%d",&n);
	while(n>=10)
	{
		n/=10;
	}
	firstdigit=n;
	if(isprime(firstdigit))
		printf("yes");
	else
		printf("no");
}
