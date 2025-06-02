#include<stdio.h>
float squareroot(int num)
{
	float low=0,high=num,mid;
	float precision=0.0001;
	while((high-low)>precision)
	{
		mid=(low+high)/2;
		if(mid*mid<num)
			low=mid;
		else
			high=mid;
	}
	return (low+high)/2;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(num<0)
		printf("square root cannot be defined for negative numbers");
	else 	
		printf("%f",squareroot(num));
}
