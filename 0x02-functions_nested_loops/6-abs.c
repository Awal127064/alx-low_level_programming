#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute
 * value of an integer
 * @k: the integer value
 * Return: absolute on success
 */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
		return (k * -1);
}
