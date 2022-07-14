#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two inputs\n");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	printf("%d&&%d=%d\n",a,b,a&&b);
	printf("%d||%d=%d\n",a,b,a||b);
	printf("%d=%d\n",a,!a);
}
