#include <stdio.h>

/**
 * main - A single digit in base 10 using pitchar
 *
 * Return:0 when succeed
*/

int main(void)

{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
