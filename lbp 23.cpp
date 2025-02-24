#include<stdio.h>
 int main()
 {
 	int cups_bought,free_cups;
 	printf("enter the number of cups bought:");
 	scanf("%d",&cups_bought);
 	free_cups = cups_bought /6;
 	printf("for %d cups bought ,you get %d free cups.\n",cups_bought,free_cups);
 	return 0;
 }
