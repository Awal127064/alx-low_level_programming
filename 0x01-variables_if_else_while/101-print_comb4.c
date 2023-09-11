#include <stdio.h>
/**
 * main - printing three combination of numbers
 *  Return: O when success
 */

int main (void)

{
	int dig_1 = 0;

	while (dig_1 <= 7)
	{
		int dig_2 = dig_1 + 1;

		while (dig_2 <= 8)
		{
			int dig_3 = dig_2 + 1;

			while (dig_3 <= 9)
			{
				putchar(dig_1 + '0');
				putchar(dig_2 + '0');
				putchar(dig_3 + '0');


				if (dig_1 != 7 || dig_2 != 8 || dig_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				dig_3++;
			}
			dig_2++;
		}
		dig_1++;
	}

	putchar('\n');

	return 0;
}
