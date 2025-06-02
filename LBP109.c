#include<stdio.h>
#include <ctype.h>
int main()
{
	char str[100];
	int i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		{
			printf("%c",str[i]);
			break;
		}
	}
}
