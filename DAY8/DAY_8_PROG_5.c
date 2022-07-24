#include<stdio.h>
int main()
{
	int a[20],*p;
	int i,j,temp,n;
	p=a;
	printf("enter the array size\n");
	fflush(stdout);
	scanf("%d",&n);

	printf("enter the array element\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("number \n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
