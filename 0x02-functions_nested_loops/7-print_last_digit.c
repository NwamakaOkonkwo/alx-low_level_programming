#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}
