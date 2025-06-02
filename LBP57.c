#include<stdio.h>
int main()
{
	int x,count=0,r;
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		if(r%2==0)
			count++;
		x/=10;
	}
	printf("%d",count);
}

