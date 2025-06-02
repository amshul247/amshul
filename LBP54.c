#include<stdio.h>
long int fact(int x)
{
	if(x==0||x==1)
		return 1;
	else 
		return x*fact(x-1);
		
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%ld",fact(x));
}

