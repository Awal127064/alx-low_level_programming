#include "main.h"
/**
 * _isalpha - A function to check alphabet
 * @c:is a letter, lowercase or uppercase
 * Return: 1 for alphabet or herwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
