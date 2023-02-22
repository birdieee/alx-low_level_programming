#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if we have an alphabet as argument
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
return ((islower(c) || isupper(c)) ? 1 : 0);
}
