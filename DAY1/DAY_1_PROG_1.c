#include<stdio.h>
int main()
{
int num;
printf("enter the number");
fflush(stdout);
scanf("%d",&num);
if((num%11==0)||(num%11+1))
printf("special");
else
printf("not special");
}
