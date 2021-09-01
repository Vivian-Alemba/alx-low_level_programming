#include "main.h"
#include<stdio.h>
void print_alphabet(void)
{
	char *alph = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(alph[i]);
	}
	_putchar('\n');
}
