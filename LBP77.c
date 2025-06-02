#include<stdio.h>

int main()
{
	int n,zeroes=0,ones=0,r;
	scanf("%d",&n);
	if(n==0)
		zeroes=1;
	else
	{
		while(n>0)
		{
			r=n%10;
			if(r==0)
				zeroes++;
			else if(r==1)
				ones++;
			n/=10;
		}
	}
	printf("%d %d",ones,zeroes);
}
