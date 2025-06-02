#include<stdio.h>
int main()
{
	int n,org,rev=0,r;
	scanf("%d",&n);
	org=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	if(org==rev)
		printf("YES");
	else
		printf("NO");
}
