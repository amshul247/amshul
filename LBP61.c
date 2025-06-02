#include<stdio.h>
int gcd(x,y)
{
	if(y==0)
		return x;
	else
	 	return gcd(y,x%y);
}
int lcm(x,y)
{
	return (x*y)/gcd(x,y);
}
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("%d",lcm(n1,n2));
}
