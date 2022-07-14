#include<stdio.h>
int main()
{
	int num,b;
	printf(" enter the number\n");
	fflush(stdout);
	scanf("%d",&num);
	printf(" enter when they will meet each other taking handshake\n");
	b=num*(num-1);
	printf("b=%d\n",b);
}
