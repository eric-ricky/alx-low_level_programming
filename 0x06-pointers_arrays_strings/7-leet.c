# include <string.h>
#include "main.h"

/**
 * leet - entry point
 * @str: string input
 * Return: a character
 */

char *leet(char *str)
{
	char *leet_str = str;
	char *letters = "aAeEoOtTlL";
	char *replacements = "44330771";
	int i, j;

	for (i = 0; leet_str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (letters[j] == leet_str[i])
			{
				leet_str[i] = replacements[j];
				break;
			}
		}
	}

	return (leet_str);
}
