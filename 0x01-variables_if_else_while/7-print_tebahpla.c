#include <stdio.h>
/**
 * main - block code
 *
 * Return : 0 always;
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
