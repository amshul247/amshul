#include<stdio.h>
int main()
{
	int billamount,discount=0,digit;
	scanf("%d",&billamount);
	while(billamount>0)
	{
		digit=billamount%10;
		if(digit%2!=0)
			discount+=digit;
		billamount/=10;
	}
	printf("%d",discount);
}
