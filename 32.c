#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	char c[40];
	scanf("%s %s",&a,&b);
	strcpy(c,a);
	strcat(c,b);
	printf("%s",c);
	return 0;
}
