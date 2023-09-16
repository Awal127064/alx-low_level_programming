#include "main.h"
/**
 * print_alphabet - A fucntion to print lowercase aplhabet
 */
void print_alphabet(void)
{
	int alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
