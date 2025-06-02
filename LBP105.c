#include<stdio.h>
int isprime(num)
{
	int i;
	if(num<2)
		return 0;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
int nextprime(int n)
{
	while(!isprime(n))
		n++;
	return n;
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",nextprime(num));	
}
