#include<unistd.h>
/**
 * main - printing without  printf  puts
 *
 * Return:  1
 */
int main(void)
{
	char art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, art, 59);
	return (1);
}
