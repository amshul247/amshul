#include<stdio.h>
#include<string.h>
int endswith(char str1[],char str2[])
{
	int len1=strlen(str1),i;
	int len2=strlen(str2);
	if(len2>len1)
		return 0;
	for(i=0;i<len2;i++)
	{
		if(str1[len1-len2+i]!=str2[i])
			return 0;
	}
	return 1;
}
int main()
{
	char str1[50],str2[50];
	scanf("%s",str1);
	scanf("%s",str2);
	if(endswith(str1,str2))
		printf("True");
	else
		printf("false");	
}
