#include <stdio.h>

int main(void)

{
	//variable declarations
	int cg_a;
	int cg_b;
	int cg_x;


	//code
	printf("\n\n");
	printf("Enter A number : ");
	scanf("%d", &cg_a);

	printf("\n\n");
	printf("Enter another number : ");
	scanf("%d", &cg_b);

	printf("\n\n");

	//since, in all following 5 cases, the operand on the left 'a' is getting repeated inneiately on the rigt (e.g : a = a = b or a = a- b),
	//we are using compound assignment operators +=, -= , *= , /= and %=

	//since 'a' will be assigned the value of (a + b) at the expression (a += b), we must save the orignal value of 'a' to another variable (x)
	cg_x = cg_a;
	cg_a += cg_b; //a = a + b
	printf("Addition of A = %d and b = %d gives %d .\n", cg_x, cg_b, cg_a);


	//value of 'a' alterd in the above expression is usead here...
	//Since 'a' will be assigend the value of (a - b) at the expression (a -= b) we must save the original value of 'a' to another variable (x)
	cg_x = cg_a;
	cg_a -= cg_b; // a = a -b
	printf("Subtraction of A = %d and B = %d gives %d.\n", cg_x, cg_b, cg_a);


	//value of 'a' alterd in the above expression is usead here...
	//Since 'a' will be assigend the value of (a * b) at the expression (a *= b) we must save the original value of 'a' to another variable (x)
	cg_x = cg_a;
	cg_a *= cg_b; // a = a * b
	printf("Multiplication of A = %d and B = %d gives %d.\n", cg_x, cg_b, cg_a);


	//value of 'a' alterd in the above expression is usead here...
	//Since 'a' will be assigend the value of (a / b) at the expression (a /= b) we must save the original value of 'a' to another variable (x)
	cg_x = cg_a;
	cg_a /= cg_b; // a = a / b
	printf("Division of A = %d and B = %d gives Quotient %d.\n", cg_x, cg_b, cg_a);


	//value of 'a' alterd in the above expression is usead here...
	//Since 'a' will be assigend the value of (a % b) at the expression (a %= b) we must save the original value of 'a' to another variable (x)
	cg_x = cg_a;
	cg_a %= cg_b; // a = a % b
	printf("Division of A = %d and B = %d gives Quotient %d.\n", cg_x, cg_b, cg_a);


	printf("\n\n");
	return(0);
	
};