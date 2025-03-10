#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,dis,root1,root2;
	scanf("%d %d %d",&a,&b,&c);
	dis=sqrt((b*b)-(4*a*c));
	root1=((-b)+(dis))/2*a;
	printf("%d",root1);
	root2=((-b)-(dis))/2*a;
	printf("%d",root2);
	return 0;
}
