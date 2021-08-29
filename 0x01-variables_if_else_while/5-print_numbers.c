/*
 * Using printf function to display numbers
 */
#include <stdio.h>
/**
 * Main - block code
 *
 * Return: 0;
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
