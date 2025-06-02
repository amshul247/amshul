#include<stdio.h>
int main()
{
	char ip[10],defanged[30];
	int i,j=0;
	scanf("%s",ip);
	for(i=0;ip[i]!='\0';i++)
	{
		if(ip[i]=='.')
		{
			defanged[j++]='[';
			defanged[j++]='.';
			defanged[j++]=']';
		}
		else
			defanged[j++]=ip[i];
	}
	printf("%s",defanged);
}
