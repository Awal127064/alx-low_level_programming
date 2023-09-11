#include <stdio.h>
/**
 * main - List number in base 10
 * Return: 0 when successful
 */

int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
