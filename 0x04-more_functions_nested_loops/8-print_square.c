#include "main.h"

/**
 * print_square - Entry point
 * Description: checks is a character
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

void print_square(int c)
{
	int size, i, j;

	size = c;

	if (!(c <= 0))
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i < size)
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
