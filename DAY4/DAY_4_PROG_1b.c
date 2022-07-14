#include<stdio.h>
int main()
{
int x=10,y=20,z,a,b,c,d,e,f;
z= x<y;
a= x>y;
b=x<=y;
c=(x*x-y)>(y*y-x);
d=(x*x*x)<(y*x*x);
e=((x*y)!=(y*x));
f=((x*y)==(y*x));
printf("%d%d%d%d%d%d%d\n",z,a,b,c,d,e,f);
fflush(stdout);
}
