#include<stdio.h>
int main()
{
	int num,result;
	scanf("%d",&num);
	if(num%2==0)
		result=num;
	else
		result=num*2;	
	printf("%d",result);
}
