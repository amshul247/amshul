#include<stdio.h>
int main()
{
	char str[100];
	int i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
			str[i]=tolower(str[i]);
		else if(islower(str[i]))
			str[i]=toupper(str[i]);
	}
	printf("%s",str);
} 
