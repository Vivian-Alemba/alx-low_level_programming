#include "main.h"
#include <string.h>

/**
 * rev_string - funciion that reverses a string
 * @s: A pointer to the character
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < (n / 2); i++)
	{
		char ch = s[i];

		s[i] = s[n - i - 1];
		s[n - i - 1] = ch;
	}
}
