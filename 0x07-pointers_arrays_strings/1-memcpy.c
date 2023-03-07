#include "main.h"

/**
 * _memcpy - entry function
 * @dest: first
 * @src: second
 * @n: the interger
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
