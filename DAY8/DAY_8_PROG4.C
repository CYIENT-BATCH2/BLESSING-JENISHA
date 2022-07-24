#include<stdio.h>
int toggle(int data,int pos)
{
	data=data^(1<<pos);
	return data;

}
int main()
{
	int pos,data,result;
	printf("enter the data\n");
	fflush(stdout);
	scanf("%d",&data);
	printf("enter the pos\n");
	scanf("%d",&pos);
}
