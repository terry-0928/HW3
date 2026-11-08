#include <stdio.h>
#include <stdlib.h>

char input_char(char x);

char input_char(char x)
{

	if (x >= 'A' && x <= 'Z')
	{
		return x + 32;
	}
	else if (x >= 'a' && x <= 'z')
	{
		return x - 32;
	}

	return x;
}

int main()
{
	char x;

	while (1) {

		printf("Enter an alphabet (# to end): ");
		scanf(" %c", &x);

		if (x == '#') {
			break;
		}

		printf("The converted character is: %c", input_char(x));
		printf("\n");
	}

	system("pause");
	return 0;
}