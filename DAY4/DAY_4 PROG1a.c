#include<stdio.h>
int main()
{
	int x=30, y=20, z=10,k,a,b,c,d ;
k = x + y * z / 4 % 2 - 1 ;
printf("%d\n",k);
a= x% y+z*z;
printf("%d\n",a);
b= x*x-y/z;
printf("%d\n",b);
c= x+y/z-y;
printf("%d\n",c);
d=x+y-(x=y);
printf("%d\n",d);
//y=x+y-x=y;
}
