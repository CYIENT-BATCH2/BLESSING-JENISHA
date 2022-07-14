#include<stdio.h>
int main()
{
int num,rem,c=0,sum=0;
printf("enter the number\n");
fflush(stdout);
scanf("%d",&num);
loop:
if(num>0)
{
	rem=num%10;
	c++;
	if((c==2)||(c==5))
		sum=sum+rem;
	num=num/10;
	goto loop;
}
printf("sum=%d\n",sum);
}
