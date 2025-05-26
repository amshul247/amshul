#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],i;
	int sum=0;
	printf("enter the character:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		sum++;
	}
	printf("%d",sum);
	return 0;
}
