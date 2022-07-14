#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	fflush(stdout);
	scanf("%c",&ch);
	((ch>='a'||ch>='A')&&(ch<='z'||ch<='Z'))?printf("alphabet\n"):printf("not alphabet\n");

}
