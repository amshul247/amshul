#include<stdio.h>

int main()
{
	int n,sum=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%3==0)
			sum+=r;
		n/=10;
	}
	printf("%d",sum);
}
