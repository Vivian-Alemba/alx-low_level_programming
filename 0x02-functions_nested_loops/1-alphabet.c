#include "main.h"
#include<stdio.h>

/**
 *print_alphabet - prints the alphabet, in lowercase.
 *
 */
void print_alphabet(void)
{
	char *alph = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
