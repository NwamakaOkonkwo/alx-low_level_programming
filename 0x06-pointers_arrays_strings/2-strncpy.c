#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (desy)
}
