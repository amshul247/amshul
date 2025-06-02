#include<stdio.h>
int main()
{
	int num,sum=0,product=1,digit;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		sum+=digit;
		product*=digit;
		num/=10;
	}
	if(sum==0)
		printf("0");
	else
		printf("%d",product-sum);
}
