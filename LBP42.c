#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=30 && x<=50)
		printf("D");
	else if(x>=51 && x<=60)
		printf("C");
	else if(x>=61 && x<=80)
		printf("B");
	else if(x>=81 && x<=100)
		printf("A");
	else 
	printf("enter valid input");	
}

