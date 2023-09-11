#include <stdio.h>
/**
 * main - Function for both lower and uppercase letter
 * Return: 0 on success
 */
int main(void)
{
	char alpha;
	char bet = 'A';

	alpha = 'a';
	while (alpha >= 'a' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (bet <= 'Z')
	{
		putchar(bet);
		bet++;
	}
	putchar('\n');
	return (0);
}
