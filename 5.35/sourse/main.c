#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib(unsigned int);

int main()
{
	unsigned int n;

	printf("Enter number n: ");
	scanf("%u", &n);

	if (n > 93)
	{
		printf("Number is too large!\n");
	}
	else
	{
		printf("fibonacci number is %llu\n", fib(n));
	}

	printf("Largest Fibonacci number is %llu\n", fib(93));

	system("pause");
	return 0;
}

unsigned long long int fib(unsigned int n)
{
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}

	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int c ;

	for (unsigned int i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return b;
}