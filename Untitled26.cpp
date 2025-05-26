#include<stdio.h>
#include<conio.h>
int main()
{ 
  int n,j,i=0,arr[10];
  scanf("%d",&n);
  while(n>0);
  {
  	arr[i]=n%2;
  	n=n/2;
  	i++;
  }
   for(j=i-1;j>=0;j--)
     printf("%d",arr[j]);
}
