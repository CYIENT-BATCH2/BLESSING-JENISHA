#include<stdio.h>
int main()
{
	int a,b,t,i,j;
	printf("enter the two number\n");
	fflush(stdout);
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d b=%d\n",a,b);


	printf("enter the two values\n");
	scanf("%d%d",&i,&j);

	i=i^j;
	j=i^j;
	i=i^j;
	printf("%d%d",i,j);

}
