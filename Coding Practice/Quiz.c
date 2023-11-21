#include <stdio.h>
#include<limits.h>

int main()
{
	/*int number;
	printf("Enter A Number\t");
	scanf("%d", &number);
	printf("The Number Entered is %d", number);*/

	/*int number1, number2, number3;
	printf("Enter the number \t");
	scanf("%d %d", &number1, &number2);
	number3 = number1 + number2;
	printf("The Sum is %d : ", number3);*/

	// using size of oprators

	/*printf("Character takes %zd bytes in memory\n", sizeof(char));
	printf("Integer takes %zd bytes in memory\n", sizeof(int));
	printf("Float takes %zd bytes in mrmory\n", sizeof(float));
	printf("Long takes %zd bytes in memory\n", sizeof(long));
	printf("Double takes %zd bytes in memory\n", sizeof(double));*/

	/*int a = 3251;
	unsigned b = 2568;
	printf("%d %d", a, b);*/

	//char a = 128;
	//unsigned char b = 874422;
	//printf("%d\n", b);

	/*float a = 3.5e38;
	double b = 3.5e30;
	printf("%f %lf", a,b);*/


		// when we add maximum value to integers then it rounds of to its minimum value (circle) 

		//printf("%d\n", INT_MIN);
		//printf("%d\n", INT_MAX);
		//// printf("%d\n", INT_MAX + 1);
		//// printf("%d\n", INT_MAX + 2);
		//// printf("%d\n", INT_MAX + 3);
		//// printf("%d\n", INT_MAX + 4);
		//// printf("%d\n", INT_MAX + 5);
		//// printf("%d\n", INT_MAX + 6);
		//// printf("%d\n", INT_MAX + 7);

		//// when we add maximum value to integers then it rounds of to its minimum value (circle) 
		//printf("%d\n", INT_MIN - 1);
		//printf("%d\n", INT_MIN - 2);
		//printf("%d\n", INT_MIN - 3);
		//printf("%d\n", INT_MIN - 4);
		//printf("%d\n", INT_MIN - 5);

	
	//int a = 10;
	//int* p;
	//p = &a; // &a = address of address
	//printf("%d\n", p);
	//printf("%d\n", *p);
	//printf("%d\n", &a);

	/*int a = 4;

	scanf("%d", &a);
	int arr[a];

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
		if (i % 2 == 0)
		{
			printf("%d\n", arr[i]);
		}
	}*/


	int i, j;

	for (i = 1; i <= 5; i++) // column 
	{
		for (j = 1; j <= 5; j++) // row
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;


}