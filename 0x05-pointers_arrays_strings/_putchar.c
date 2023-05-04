#include <untstd.h>

/**
 * _putchar - writes character c to stdout)
 * @c: char to be printed
 * Resource: on success 1
 */
int _putchar(char c)
{
	return (writer(1, &c, 1));
}
