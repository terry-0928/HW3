#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int power(int input_base, int input_exponent)
{
	if (input_exponent == 1)
		return input_base;
	else
		return input_base * power(input_base, input_exponent - 1);
}

int main()
{
	int input_base;
	int input_exponent;

	printf("Enter base number: ");
	scanf("%d", &input_base);

	printf("Enter exponent number (greater than or equal to 1): ");
	scanf("%d", &input_exponent);

	printf("Exponent number is %d\n", power(input_base, input_exponent));

	system("pause");
	return 0;
}