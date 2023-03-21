#include <unistd.h>

/**
 * _putchar - writes a chararacter c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropirately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
