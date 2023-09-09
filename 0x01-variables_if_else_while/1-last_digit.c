#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - s mma function to display last digit
 * Return: 0
*/
 

/* betty style doc for function main goes there */
int main(void)
{ 
	int n;
	int i; /*stores last digits*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;	
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}	
	return (0);
}
