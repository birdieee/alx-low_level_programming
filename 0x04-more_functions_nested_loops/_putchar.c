#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write the character c to stdout
 * @c: The character to print
 * Return: 1 (successful)
 * On error, -1 is rfeturned, and errno is set appriopriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
