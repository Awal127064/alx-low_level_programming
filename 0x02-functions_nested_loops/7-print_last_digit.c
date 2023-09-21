#include "main.h"
/**
 * print_last_digit - A function to print
 * last digit
 * @n: the number to take the last digit from
 * Return: last digit when success
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
