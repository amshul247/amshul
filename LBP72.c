#include<stdio.h>
int isprime(int n)
{
	int i,count=0;
	if(n==1)
	return 0;
	for(i=2;i<n;i++)
	{
		if (n%i==0)
		{
			count++;
			break;
		}
	}
	if (count==0)
		return 1;
	else 
		return 0;
}
int main()
{
	int n,sum=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(isprime(r))
			sum+=r;
		n/=10;
	}
	printf("%d",sum);
}
