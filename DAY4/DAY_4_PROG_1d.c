#include<stdio.h>
int main()
{
	int i=10,j=20,m=5,x=10,y=20,z=30;
	int a,b,c,d,e,f,g,h,l,n;
a=i&j;
b=i|j;
c=i^j;
d=i&&j|m&&j;
e=i||j&m&&i;
f=i&j|j||m;
g=x&&y&z;
h=x&y|z&&x;
l=x||y&y;
n=x||y&(y&&z);
printf("%d%d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,l,n);
fflush(stdout);
}
