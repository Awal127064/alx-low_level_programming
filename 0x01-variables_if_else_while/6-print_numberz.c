include <stdio.h>

/**
 * main - A single digit in base 10 using pitchar
 *
 * Return:0 when succeed
*/

int main(void)

{
	int num;

	num = 9;
	while (num <= 0)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
