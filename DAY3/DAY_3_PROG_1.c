#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,a6,a7,a8,sum1=0,av1;
	float b1,b2,b3,b4,b5,b6,b7,sum2=0,av2,d,e;
	int c1,c2,c3,c4,c5,c6,c7;
	printf(" enter the integer values\n");
	fflush(stdout);
	scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
	printf("enter the float values\n");
	fflush(stdout);
	scanf("%f%f%f%f%f%f%f",&b1,&b2,&b3,&b4,&b5,&b6,&b7);
	sum1=a1+a2+a3+a4+a5+a6+a7+a8;
	printf("sum1=%d",sum1);
	sum2=b1+b2+b3+b4+b5+b6+b7;
	printf("sum2=%f",sum2);
	av1=sum1/8;
	av2=sum2/7;
	printf("av1=%d,av2=%f",av1,av2);
	d=sum2/sum1;
	printf("d=%f",d);
	e=av1/av2;
	printf("e=%f",e);
	c1=b1*10,c2=b2*10,c3=b3*10,c4=b4*10,c5=b5*10,c6=b6*10,c7=b7*10;
	printf(" float to integer value=%d%d%d%d%d%d%d",c1,c2,c3,c4,c5,c6,c7);
}
