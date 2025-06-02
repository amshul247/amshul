#include<stdio.h>
int is_perfect(num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum+=i;
	}
	if (sum==num)
		return 1;
	else 
		return 0;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(is_perfect(num))
		printf("YES");
	else
		printf("NO");
}
