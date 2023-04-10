#include "main.h"

/**
 * set_bit - program sets the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	if (*n & m)
		*n ^= m;


	return (1);
}
