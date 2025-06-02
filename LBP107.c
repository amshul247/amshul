#include<stdio.h>
int main()
{
	char string[20],revstring[20];
	int i,count=0,j=0,pali=0;
	scanf("%s",string);
	for(i=0;string[i]!='\0';i++)
	{
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		revstring[i]=string[j];
		j++;
	}
	for(i=0;i<=count;i++)
	{
		if(string[i]==revstring[i])
		{
			pali++;
		}
	}
	if(count==pali)
		printf("valid");
	else
		printf("invalid");
}
