#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n<2)
		return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int x,i,y,sum=0;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(isprime(i))
			sum+=i;	
	}	
	printf("%d",sum);
}
