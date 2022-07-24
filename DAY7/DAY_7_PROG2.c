/*ALGORITHM
 * Start the program and user has to give  the input.
 * We are taken i and j values to separate the odd and even bits.
 * We are doing AND operation with the given number and 0xAAAAAAA for even bits.
 * We are doing AND operation with the given number and 0x5555555 for odd bits.
 * After getting i and j values right shift with 1 for i value and left shift by 1 for  j values.
 * Do OR operation for that values and print the values.
 */







#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value\n");
	scanf("%d",&n);
	i=n&0xAAAAAAAA;
	j=n&0x55555555;
	printf("%d",(i>>1)|(j<<1));
	return 0;
}
