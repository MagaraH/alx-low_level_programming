#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: unsigned it to set bit
 * @index: position to set bit
 * Return: 1 / -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = ~(bit << index);
	*n = (*n & bit);

	return (1);
}
