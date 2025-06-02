#include<stdio.h>
int isprime(int n)
{
	int i;
	if(n<=1)
		return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int amount,discount=0,camount,r;
	scanf("%d",&amount);
	camount=discount=amount;
	while(camount>0)
	{
		r=camount%10;
		if(isprime(r))
			discount=discount-r;
		camount/=10;
	}
	if(discount==amount)
		printf("sorry! no discount");
	else
		printf("%d",discount);
}
