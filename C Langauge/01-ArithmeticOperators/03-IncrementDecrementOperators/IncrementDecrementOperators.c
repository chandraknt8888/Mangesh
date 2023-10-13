#include <stdio.h>

int main(void)

{
	//Variable declarations

	int cg_a = 5;
	int cg_b = 10;

	//code
	printf("\n\n");
	printf("cg_A = %d\n", cg_a);
	printf("cg_A = %d\n", cg_a++);
	printf("cg_A = %d\n", cg_a);
	printf("cg_A = %d\n", ++cg_a);

	printf("cg_B = %d\n", cg_b);
	printf("cg_B = %d\n", cg_b--);
	printf("cg_B = %d\n", cg_b);
	printf("cg_B = %d\n", --cg_b);

	return(0);
}