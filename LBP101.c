#include<stdio.h>
int isprime(int n)
{
	return (n==2||n==3||n==5||n==7);
}
int main()
{
	int num,digit,sumofeven=0,sumofprime=0;
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit%2==0)
			sumofeven+=digit;
		if(isprime(digit))
			sumofprime+=digit;
		num/=10;	
	}	
	printf("%d",sumofeven*sumofprime);
}
