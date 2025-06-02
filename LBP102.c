#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x==y)
		printf("%d",(x+y)*2);
	else
		printf("%d",x+y);	
}
