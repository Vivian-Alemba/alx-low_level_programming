/*
 * Using the putchar function to print alphabet on screen
 */
#include<stdio.h>
/**
 * main - block code
 *putchar function displays alphabet on screen
 * Return:0;
 */
int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);

	}
	putchar('\n');
	return (0);
}
