#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int n = len / 2;

	if (len % 2 != 0)
	{
		n += 1;
	}

	for (i = n; i < len; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
