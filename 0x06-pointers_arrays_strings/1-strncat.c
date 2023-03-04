#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - entry point
 * @dest: first param
 * @src: second param
 * @n: the interger
 * Return: a character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (result);
}
