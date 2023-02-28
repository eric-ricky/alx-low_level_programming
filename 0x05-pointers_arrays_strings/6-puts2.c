#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}

		i++;
	}

	printf("\n");
}
