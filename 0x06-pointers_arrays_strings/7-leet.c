#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str:a pointer to the character
 *
 * Return: nothing
 */
char *leet(char *str)
{
	int a = 0, b = 0, l = 5;
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char values[5] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;

		while (b < l)
		{
			if (str[a] == letters[b] || str[a] - 32 == letters[b])
			{
				str[a] = values[b];
			}

			b++;
		}

		a++;
	}

	return (str);

}
