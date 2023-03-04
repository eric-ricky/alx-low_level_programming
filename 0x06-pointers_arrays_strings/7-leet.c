# include <string.h>
#include "main.h"

/**
 * leet - entry point
 * @str: string input
 * Return: a character
 */

char *leet(char *str)
{
	int i;
	char *p = str;
	char leet_map[256] = {0};

	const char *leet_chars = "aAeEoOtTlL";
	const char *leet_replacements = "44330771";

	for (i = 0; leet_chars[i]; i++)
	{
		leet_map[(unsigned char) leet_chars[i]] = leet_replacements[i];
	}

	while (*p)
	{
		if (leet_map[(unsigned char) *p])
		{
			*p = leet_map[(unsigned char) *p];
		}
		p++;
	}

	return (str);
}
