#include<stdio.h>
int main()
{
	int i=10,j=2,k,l,m,n,o,p;

	k=i<<j;
	l=i>>j;
	m=(i&&j)<<j;
	n=(i||j)>>j;
	o=(i&j)<<i;
	p=(i||j&&i);
	printf("%d%d%d%d%d%d%d",k,l,m,n,o,p);
	fflush(stdout);
}
