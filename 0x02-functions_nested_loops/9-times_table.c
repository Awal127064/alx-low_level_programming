#include "main.h"
/**
 * times_table - A function to print the 9 time table
 */
void times_table(void)
{
	int y, x;
	int z;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			z = (x * y);
			if (x == 0)
			{
				_putchar(z + '0');
			}
			if (z <= 9 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
