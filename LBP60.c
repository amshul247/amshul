#include<stdio.h>
int gcd(a,b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int gcd_of_three(x,y,z)
{
	int gcd_xy;
	gcd_xy=gcd(x,y);
	return gcd(gcd_xy,z);
}
int main()
{
	int n1,n2,n3,result;
	scanf("%d %d %d",&n1,&n2,&n3);
	result = gcd_of_three(n1,n2,n3);
	printf("%d",result);
}
