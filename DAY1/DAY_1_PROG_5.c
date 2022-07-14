#include<stdio.h>
int main()
{
	int n;
	printf(" enter the balls\n");
	fflush(stdout);
	scanf("%d",&n);
	if(n%2==0)
		printf("even balls");
	else
		printf("odd");
}
