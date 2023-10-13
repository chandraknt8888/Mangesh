#include <stdio.h>

int main(void)

{
	//varibale declarations
	int cg_a;
	int cg_b;
	int cg_c;
	int result;

	//code
	printf("\n\n");
	printf("Enter first Integer : ");
	scanf("%d", &cg_a);

	printf("\n\n");
	printf("Enter Second Integer : ");
	scanf("%d", &cg_b);

	printf("\n\n");
	printf("Enter Third Integer : ");
	scanf("%d", &cg_c);

	printf("\n\n");
	printf("If answer = 0, it is 'FALSE'.\n");
	printf("If answer = 0, it is 'TURE'.\n\n");

	result = (cg_a <= cg_b) && (cg_b != cg_c);
	printf("Logical AND (&&) : answer is TRUE (1) If and only if both conditions are ture. the answer is FALSE (0), if any one or both conditions are false.\n\n");
	printf("A = %d is less than or equal to b = %d AND b = %d Is not Equal to c = %d   \t answer = %d\n\n", cg_a, cg_b,cg_b, cg_c, result);

	result = (cg_b >= cg_a) || (cg_a == cg_c);
	printf("Logical AND (||) : answer is FALSE (0) If and only if both conditions are FALSE. the answer is TURE (1), if any one or both conditions are Ture.\n\n");
	
	printf("Either B = %d is Greater than or equal to A = %d OR A = %d Is not Equal to C = %d   \t answer = %d\n\n", cg_b, cg_a, cg_a, cg_c, result);


	result = !cg_a;
	printf("A = %d And using logical NOT (!) operator on A gives result = %d\n\n", cg_a, result);

	result = !cg_b;
	printf("B = %d And using logical NOT (!) operator on B gives result = %d\n\n", cg_b, result);

	result = !cg_c;
	printf("C = %d And using logical NOT (!) operator on C gives result = %d\n\n", cg_c, result);


	result = (!(cg_a <= cg_b) && !(cg_b != cg_c));
	printf("Using logical NOT (!) on (cg_a <= cg_b) And also on (cg_b != cg_c) And then AND- ing Them afterword gives result = %d\n", result);

	printf("\n\n");

	result = !((cg_b >= cg_a) || (cg_a == cg_c));
	printf("Using logical NOT (!) on entire logical expression (cg_b >= cg_a) || (cg_a == cg_c) gives result = %d\n", result);

	printf("\n\n");

	return(0);




}