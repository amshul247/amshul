#include<stdio.h>
int main()
{
	int x,y,i,j,count=0;
	float sum=0,nop=0;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i==1)
			continue;
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			sum=sum+i;
			nop++;
		}
	}

	printf("%f",sum/nop);
}

