#include<stdio.h>
int replace0vt5(int n)
{
	int result=0,place=1,digit;
	if(n==0)
		return 5;
	while(n>0)
	{
		digit=n%10;
		if(digit==0)
			digit=5;
		result+=digit*place;
		place*=10;
		n/=10;
	}
	return result;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",replace0vt5(n));
}
