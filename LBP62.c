#include<stdio.h>
long int armstrong(long int x)
{
    long int	orgnum,r,result=0;
	orgnum=x;
	while(orgnum>0)
	{
		r=orgnum%10;
		result=result+r*r*r;
		orgnum=orgnum/10;
	}
	if(result==x)
		return 1;
	else
		return 0;
}
int main()
{
	long int i,lower,upper;
	scanf("%ld %ld",&lower,&upper);
	for(i=lower;i<=upper;i++)
	{
		if(armstrong(i))
			printf("%ld\t",i);
	}
}

