#include<stdio.h>
int ispali(int n)
{
	int org=n,rev=0,r;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	return (org==rev);
}
int main()
{
	int st,end,i;
	scanf("%d %d",&st,&end);
	for(i=st;i<=end;i++)
	{
		if(ispali(i))
			printf("%d	",i);
	}
}
