#include "main.h"
#include <stdio.h>
/**
 * puts2 - print  string
 * @str: pointer parameter 
 * Description: print strings  value
 */

void puts2(char *str)
{
	int i, k;
	int h;
	i = 0;
	while (str[i])
	{
		i++;
	}
	k = 1;
	for (h = 0; h < i; h++)
	{
		if (h % 2 == 0)
		{
			printf("%c", str[h]);
		}
		k++;
	}
	printf("\n");
}
