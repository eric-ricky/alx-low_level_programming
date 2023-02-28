#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		char temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
	}
}
