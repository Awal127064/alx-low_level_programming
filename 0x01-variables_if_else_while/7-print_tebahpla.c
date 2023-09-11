#include <stdio.h>

/**
 * main - A function to pitchar reverse alphabet
 * Return: 0 when right
 */

int main(void)

{
	int alp;

	alp = 'z';
	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
