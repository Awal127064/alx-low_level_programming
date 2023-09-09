#include <stdio.h>
/**
 * main - All alphabets except e and q
 *
 * Return: 0 on success
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
