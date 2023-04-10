#include "main.h"
#include <string.h>

/**
 * binary_to_uint - program converts a binary number to an unsigned int.
 * @b: program is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 1;
	unsigned int t = 0;
	int s;
	unsigned int len;

	len = strlen(b);

	for (s = len - 1; s >= 0; s--)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
		if (b[s] == '1')
		{
			t += y;
		}
		y *= 2;
	}
	return (t);
}
