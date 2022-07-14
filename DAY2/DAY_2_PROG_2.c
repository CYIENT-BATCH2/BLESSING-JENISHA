#include<stdio.h>
int main()
{
	long int num,bit=7;
	printf("enter the number\n");
	fflush(stdout);
	scanf("%ld",&num);
	loop:
	if(bit>=0)
	{
		printf("%d",(num>>bit)&1);
		bit--;
		goto loop;
	}
}
