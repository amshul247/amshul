#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n<=1)
		return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int sum_of_prime_factors(int n)
{
	int sum=0,i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			if(isprime(i))
				sum+=i;
		}
	}
	return sum;
}
int main()
{
	int n,result;
	scanf("%d",&n);
	if(n<=1)
		printf("no prime factors for number less than 2");
	else
	{
		result=sum_of_prime_factors(n);
		printf("%d",result);
	}
}
