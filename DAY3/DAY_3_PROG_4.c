#include<stdio.h>
int main()
{
	int a=204,pos=7;
	printf("a=%x hexa decimal value\n");
	fflush(stdout);
	loop:
	if(pos>=0)
	{
		printf("%d",(a>>pos)&1);
		pos--;
		goto loop;
	}
}
