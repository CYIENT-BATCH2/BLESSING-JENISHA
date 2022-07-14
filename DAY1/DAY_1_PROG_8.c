#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	fflush(stdout);
	scanf("%c",&ch);
	printf("ch=%c, ascii value=%d\n",ch,ch);
}
