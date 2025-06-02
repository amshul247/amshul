#include<stdio.h>
int main()
{
	int x,y,r;
	scanf("%d",&x);
	y=x%10;
	while(x>0)
	{
		r=x%10;
		if(y<r)
			y=r;
		x=x/10;
	}
	printf("%d",y);
}

