#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b);

int lcm(int a, int b)
{
	int max;
	int min;
	int i = 1;

	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	while ((max * i) % min != 0) {
		i++;
	}

	return max * i;
}

int main()
{
	int a;
	int b;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);


	printf("Least common multiple number is %d\n", lcm(a, b));

	system("pause");
	return 0;
}