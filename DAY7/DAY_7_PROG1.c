
/*ALGORITHM:
 *We are taken two inputs values in hex decimal and taken i and temp as char datatype.
 *According to our requirements to convert little endian to big endian, intially we are taking temp variable.
 *Doing OR oprations  between temp and input values and that values is stored in temp.
 *After doing that value OR with (big<<8) and stored in to big.
 *Input values are right shifted by 8 times and the vales.
*/



 #include<stdio.h>
int main()
{
	unsigned int big=0;
	unsigned char temp=0,i;
	unsigned int l=0x12345678;
	for(i=0;i<4;i++)
	{
		temp=0;
		temp=l|temp;
		big=temp|(big<<8);
		l=l>>8;
	}
	printf("big endian=%x\n",big);
	}
