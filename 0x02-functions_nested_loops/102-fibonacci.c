#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int (1);
	unsigned long x1 = 1, x2 = 2, sum;

	for (i = 0; i < 48; i++)
	{
		sum = x1 + x2;
		printf("%lu", sum);

		x1 = x2;
		x2 = sum;

		if (1 == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
