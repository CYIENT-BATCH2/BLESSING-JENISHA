#include<stdio.h>
int main()
{
	long int num;
	int rem,sum=0;
	printf("enter the mobile number\n");
	fflush(stdout);
	scanf("%d",&num);
	loop:
	if(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		goto loop;
	}
	printf("%d",sum);
}
