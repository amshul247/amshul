#include<stdio.h>
int main()
{
	int num,even_sum=0,odd_sum=0,digit;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit%2==0)
			even_sum+=digit;
		else
			odd_sum+=digit;
		num/=10;
	}	
	if(even_sum==0|| odd_sum==0)
		printf("0");
	else
		printf("%d",abs(even_sum-odd_sum));
}
