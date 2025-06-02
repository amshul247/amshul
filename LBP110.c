#include<stdio.h>
int main()
{
	char time[10];
	int min,sec,total_seconds;
	scanf("%s",time);
	sscanf(time,"%d:%d",&min,&sec);
	total_seconds=min*60+sec;
	printf("%d",total_seconds);
}
