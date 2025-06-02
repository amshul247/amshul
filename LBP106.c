#include<stdio.h>
int sumofdigits(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int x,y,sum=0,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		sum+=sumofdigits(i);	
	}	
	printf("%d",sum);
}
