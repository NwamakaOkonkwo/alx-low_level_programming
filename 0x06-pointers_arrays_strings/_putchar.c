#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: char to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
