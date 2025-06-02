#include<stdio.h>
int main()
{
	int n,cn,sum=0;
	scanf("%d",&n);
	cn=n;
	while(cn>0)
	{
		sum=sum+(cn%10);
		cn/=10;
	}
	if(n%sum==0)
		printf("YES");
	else
		printf("NO");
}
