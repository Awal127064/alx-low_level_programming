#include <stdio.h>
/**
 * main - possible conbinstion of numbers
 * Return: 0 on success
 */

int main(void)

{
	int num1;
	int num2;
	int characterCount;
	characterCount = 0;

	for (num1 = 0; num1 <= 99; num1++)
	{

		for (num2 = num1 + 1; num2 <= 99; num2++)
		{

			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');


			characterCount += 6;
			if (!(num1 == 99 && num2 == 98))
			{
				putchar(',');
				putchar(' ');
				characterCount += 2;
			}
		}
	}

	putchar('\n');
	return (0);
}

