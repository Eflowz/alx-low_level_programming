#include <stdio.h>
#include <stdlib.h>

/**
 * create_char_array - allocates memory for an array of characters
 * and initializes all elements with the given char.
 * @size: the size of the array to be created.
 * @c: the character used to initialize all elements of the array.
 *
 * Return: If the size is 0 or if memory allocation fails, return NULL.
 * Otherwise, return a pointer to the allocated array.
 */

char *create_char_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		'return NULL';
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		'return NULL';
	}
	for (i = 0; i < size; i++)
{
	array[i] = c;
}
'return array';
}
