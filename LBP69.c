#include<stdio.h>
int main()
{	
	int x,r,product=1;
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		if(r==0)
			continue;
		product=product*r;
		x=x/10;
	}
	printf("%d",product);
}
