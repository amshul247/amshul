#include<stdio.h>
int sequencesum(int i,int j,int k)
{
	int sum=0,x;
	for(x=i;x<=j;x++)
		sum+=x;
	for(x=j-1;x>=k;x--)
		sum+=x;
	return sum;
}
int main()
{
	int i,j,k;
	scanf("%d %d %d",&i,&j,&k);
	printf("%d",sequencesum(i,j,k));
}
