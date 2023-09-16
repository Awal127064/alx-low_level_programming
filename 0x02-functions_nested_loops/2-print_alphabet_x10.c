#include "main.h"
/**
 * print_alphabet_x10 - A function to print the alphebet 10x
 */
void print_alphabet_x10(void)
{
	int alfa, i;

	for (i = 1; i <= 10; i++)
	{
		for (alfa = 97; alfa <= 122; alfa++)
		{
			_putchar(alfa);
		}

	_putchar('\n');
	}
}
