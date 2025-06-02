#include<stdio.h>
int reversednum(int n)
{
	int rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	return rev;
}
int main()
{
	int num,rev,result;
	scanf("%d",&num);
	rev=reversednum(num);
	result=num+rev;
	printf("%d",result);
}
