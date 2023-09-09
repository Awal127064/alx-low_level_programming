#include <stdio.h>

/**
 * main - Print Alphetically with putchar
 * Return: 0
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
