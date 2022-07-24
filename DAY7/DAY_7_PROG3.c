#include<stdio.h>
int main()
{
	int CMCON,ADCON0;
	int out;
	printf("enter the values of adcon and cmcon\n");
	fflush(stdout);
	scanf("%x%x",&ADCON0,&CMCON);
	out=(ADCON0 & 0X3c)>>2;
	if(out==0x07)
	{
		printf("CMCON=%X",(CMCON & 0Xf0));
	}
	else
	{
		printf("ADCON0 register some bits are not set with 0x07");
	}
}
