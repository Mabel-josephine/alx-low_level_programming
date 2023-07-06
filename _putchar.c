#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: Character to print
 *
 * Return: if successful 1.
 * On error, return -1, and errno set adequately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

