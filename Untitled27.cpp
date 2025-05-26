#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char size,i,s1[10],*a[10]={ "if","while","for","do while"};
  int flag=0;
  scanf("%s",s1);
  int n;
  for(i=0;i<=n;i++)
  {
  	if(strcmp(s1,a[i])==0)
   {
     flag==1;
     break;
   }
  }
  if(flag==1)
     printf("true");
  else
     printf("flase");
  
 
}

