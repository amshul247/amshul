#include<stdio.h>
int main()
{
	int orderid,sumsquare=0,product=1,digit,otp;
	scanf("%d",&orderid);
	while(orderid>0)
	{
		digit=orderid%10;
		sumsquare+=digit*digit;
		product*=digit;
		orderid/=10;	
	}	
	otp=sumsquare-product;
	printf("%d",otp);
}
