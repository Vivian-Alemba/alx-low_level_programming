#include <stdio.h>
/**
 * main - block code
 *
 * Return: 0;
 */
int main(void)
{
	int alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
		return (0);
}
