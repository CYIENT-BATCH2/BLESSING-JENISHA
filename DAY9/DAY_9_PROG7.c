/*ALGORITHM
  1)Take the input from user
  2)set the register SSPSTAT value
  3)In that register CKE,P and S bit are cleared with out distrubing the other bits
  4)Find out the value  of UA,BF,SMP bit in SSPSTAT register if the value of the register is 0x55.*/

#include<stdio.h>
int main()
{
	int num,num1,num2;
	printf("enter the number for SSPSTAT\n");
	fflush(stdout);
	scanf("%d",&num);
	printf("binary for SSPSTAT register\n");

	{
		for(int bit=7;bit>=0;bit--)
		{
			printf("%d",((num>>bit)&1));
		}
		printf("\n");
		if((num & 88)==88)
		{
			printf("CKE,P and S bit already set\n");

		}
		num1=(num&(~88));
	printf("after setting the CKE,P and S bit\n");
	for(int bit=7;bit>0;bit--)
	{
		printf("%d",((num1>>bit)&1));
	}
	printf("\n");
	printf("UA,BF,SMP bits in SSPSTAT register\n");
	if(num==85)
	{
		num2=num&131;
		printf("value of register=%d",num2);
	}
	}
}
