#include <stdio.h>

int main(void)

{
	//function prototypes
	void PrintBinaryFormOfNumber(unsigned int);

	//variable declarations

	unsigned int CG_a;
	unsigned int result;

	//code
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &CG_a);


	printf("\n\n\n\n");
	result = ~CG_a;
	printf("Bitwise COMPLENTING-ing Of \n CG_A = %d (Decimal) gives result %d (Decimal). \n\n", CG_a, result);

	PrintBinaryFormOfNumber(CG_a);
	PrintBinaryFormOfNumber(result);

	return(0);
}




void PrintBinaryFormOfNumber(unsigned int decimal_number)
{

	// Variable declarations
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	//code
	for (i = 0; i < 8; i++)
		binary_array[i] = 0;
	printf("The binary form of the decimal integer %d is\t=\t", decimal_number);
	num = decimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}

	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n\n");

};