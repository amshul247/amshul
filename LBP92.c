#include<stdio.h>
int BlackJack(int n1,int n2)
{
	if(n1>21 && n2>21)
		return 0;
	if(n1>21)
		return n2;
	if(n2>21)
		return n1;
	return (n1>n2)?n1:n2;
}
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("%d",BlackJack(n1,n2));
}
