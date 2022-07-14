#include<stdio.h>
int main()
{
	int yr;
	printf("enter the year\n");
	fflush(stdout);
	scanf("%d",&yr);
	if((yr%400==0)||(yr%4==0)||(yr%100==0))
		printf("leap year\n");
	else
	{
		printf("not leap year\n");
	}
}
