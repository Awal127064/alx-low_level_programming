#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: sign of numbers to be checked
 * Return: 1 for greater than zero,
 * 0 for zero  -1 for otherwise
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
	_putchar('\n');
}
