#include <stdio.h>

int main(void)
{
	// variable declaration
	int a;
	int b;
	int result;

	//code
	printf("\n\n");
	printf("Enter a Number : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter a Number : ");
	scanf("%d", &b);

	printf("\n\n");

	result = a + b;
	printf("Addition Of A = %d and B = %d Gives %d.\n", a, b, result);

	result = a - b;
	printf("Subtarction of A = %d and B = %d Gives %d.\n", a, b, result);

	result = a * b;
	printf("Multiplication of A %d and B = %d Gives %d.\n", a, b, result);

	result = a / b;
	printf("Division of A %d A and B = %d Gives %d.\n", a, b, result);

	printf("\n\n");

	rewind(0);
}