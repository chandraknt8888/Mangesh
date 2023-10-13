#include <stdio.h>

int main(void)
{

	//Variable decalarations

	int cg_a;
	int cg_b;
	int result;

	//code

	printf("\n\n");
	printf("Enter one integer : ");
	scanf("%d", &cg_a);

	printf("\n\n");
	printf("Enter another integer : ");
	scanf("%d", &cg_b);

	printf("\n\n");
	printf("is answer = 0, it is FALSE.\n");
	printf("is answer = 1, it is TRUE.\n\n");

	result = (cg_a < cg_b);
	printf("(cg_A < cg_b) A %d is less then b = %d    \t answer = %d\n", cg_a, cg_b, result);


	result = (cg_a > cg_b);
	printf("(cg_A > cg_b) A %d is Greater then b = %d    \t answer = %d\n", cg_a, cg_b, result);


	result = (cg_a <= cg_b);
	printf("(cg_A <= cg_b) A %d is Less then or equal to b = %d    \t answer = %d\n", cg_a, cg_b, result);


	result = (cg_a >= cg_b);
	printf("(cg_A >= cg_b) A %d is Greater then or equal to b = %d    \t answer = %d\n", cg_a, cg_b, result);


	result = (cg_a == cg_b);
	printf("(cg_A == cg_b) A %d is equal to b = %d    \t answer = %d\n", cg_a, cg_b, result);

	result = (cg_a != cg_b);
	printf("(cg_A != cg_b) A %d is equal to b = %d    \t answer = %d\n", cg_a, cg_b, result);

	return(0);
}