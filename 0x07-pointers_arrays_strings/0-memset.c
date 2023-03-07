#include <stdio.h>
#include "main.h"

/**
 * _memset - entry point
 * @s: first
 * @c: second
 * @n: the interger
 * Return: s
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
