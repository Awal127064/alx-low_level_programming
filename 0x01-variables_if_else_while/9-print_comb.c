#include <stdio.h>
/**
 * main - putchar numbers seperated by ,
 * Return: 0 on success
 */

int main(void)

{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);

		if (num < '9')
	{
			putchar(',');
			putchar(' ');
	}

		num++;

	}

	putchar('\n');
	return (0);
}
