#include<stdio.h>
int  algo(int n)
{
	if(n==1||n==2)
		return 1;
	else 
		return algo(n-1)+algo(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",algo(n));
}
