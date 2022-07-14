#include<stdio.h>
int main()
{
	int  x,y,z;
	printf("enter the three weights\n");
	fflush(stdout);
	scanf("%d%d%d",&x,&y,&z);
	if(x<z && y<z)
		printf("z is greater");
	else if(x<y && z<y)
		printf("y is greater");
	else if(y<x && z<x)
		printf("x is greater");
	else if(x<y && y==z)
	printf("y and z are equal");
	else if(z<x && x==y)
		printf(" x and y are equal");
	else if(y<z && z==x)
		printf(" z and x are equal");
	else if(x==y==z)
		printf("x,y and z are equal");
}
