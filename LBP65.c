#include<stdio.h>
int main()
{	
	int r,x,sum=0,cn;
	scanf("%d",&x);
	cn=x;
	while(cn>0)
	{
		r=cn%10;
		sum=sum+r;
		cn=cn/10;		
	}
	if(x%sum==0)
		printf("YES");
	else
		printf("NO");
	
}
