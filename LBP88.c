#include<stdio.h>
int main()
{
	int x,y,sum=0,i;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
			sum+=i;
	}
	printf("%d",sum);
}
