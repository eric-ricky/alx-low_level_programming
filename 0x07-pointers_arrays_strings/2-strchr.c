#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry function
 * @s: first
 * @c: second
 * Return: a char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
