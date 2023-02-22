#include <stdio.h>
/**
 *main - prints the sum of the even-valued terms in a fibonacci
 *Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tSum = tSum + y;
		}
		sum = x + y;
		x = y;
		y = sum;

	}
	printf("%ld\n", tSum);
	return (0);
}
