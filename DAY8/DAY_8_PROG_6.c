/* ALGORITHM
  1)Take the input from user
  2)set the register ToCON value
  3)TMRON and PSA bit are set without distrubing the other bit
  4)Find out bits in ToCON register,the register value is 0xF3.*/




#include<stdio.h>
int main()
{
	int num,num1,num2;
	printf("enter the number for TMRON\n");
	fflush(stdout);S
	scanf("%d",&num);
	printf("binary for TMRON register\n");
	if(num>=0 && num<=255)
	{
		for(int bit=7;bit>=0;bit--)
		{
			printf("%d",((num>>bit)&1));
		}
		printf("\n");
		if((num & 136)==136)
		{
			printf("TMRON and PSA bit already set\n");

		}
		num1=(num|(136));
	printf("after setting the TMRON and PSA  bit\n");
	for(int bit=7;bit>0;bit--)
	{
		printf("%d",((num1>>bit)&1));
	}
	printf("\n");
	printf("T0PS2,T0PS1,T0PS0 bits in TOCON register\n");
	if(num==243)
	{
		num=num&7;
		printf("value of register=%d",num2);
	}
	}
}
