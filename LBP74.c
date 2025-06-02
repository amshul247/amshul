#include<stdio.h>

int main()
{
	int  n,count=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		count++;
		n/=10;
	}
	printf("%d",count);
}
