#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the fahrenheit\n");
	fflush(stdout);
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("%.2f celsius",celsius);
}