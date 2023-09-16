#include "main.h"
/**
 * _islower - A function to determine lowercase
 * @c: is the alphabet to checked
 * Return: 1 if c is lower otherwise 0
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (!(c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);

	_putchar('\n');
}
