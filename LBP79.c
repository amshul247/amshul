#include<stdio.h>
int main()
{
	int n,digit,smallest=10,_2smallest=0;
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		if(digit<smallest)
		{
			_2smallest=smallest;
			smallest=digit;
		}
		else if(digit<_2smallest && digit!=smallest)
			_2smallest=digit;
		n/=10;
	}
	if(_2smallest==10)
		printf("there is no second smallest number");
	else 
		printf("%d",_2smallest);
}
