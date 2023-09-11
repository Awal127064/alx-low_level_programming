#include <stdio.h>
/**
 * main - hexadecimal printing
 * Return: 0 on success
 */


int main(void)
{
	char hex_dig = '0';

	while (hex_dig <= 'f')
	{

		if ((hex_dig >= '0' && hex_dig <= '9') || (hex_dig >= 'a' && hex_dig <= 'f'))

		{
			putchar(hex_dig);
		}
		hex_dig++;

	}


	putchar('\n');
	return (0);
}

