#include<stdio.h>
int main()
{
	int n,digit,largest=0,_2largest=0;
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		if(digit>largest)
		{
			_2largest=largest;
			largest=digit;
		}
		else if(digit>_2largest && digit!=largest)
			_2largest=digit;
		n/=10;
	}
	if(_2largest==0)
		printf("there is no second largest number");
	else 
		printf("%d",_2largest);
}
