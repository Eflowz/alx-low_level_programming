#include <stdio.h>
/**
 * main - prints sum of even fibonacci suit element
 * fibonacci suit numbers
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0, sum = 0;

	while (f3 <= 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;

		if ((f1 % 2) == 0)
		sum += f1;
	}

	printf("%ld\n", sum);
	return (0);
}
