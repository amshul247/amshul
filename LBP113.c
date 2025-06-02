#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],result[40];
	result[0]='\0';
	scanf("%s",a);
	scanf("%s",b);
	strcat(result,a);
	strcat(result,b);
	strcat(result,b);
	strcat(result,a);
	printf("%s",result);
}
