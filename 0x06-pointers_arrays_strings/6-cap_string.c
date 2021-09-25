#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @: a pointer to a character
 *
 * Return: nothing
 */
char *cap_string(char *str)
{
	int a = 0, i;
	int j = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < j)
		{
		if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
			str[a] -= 32;

		i++;

		}

		a++;
	}

	return (str);

}
