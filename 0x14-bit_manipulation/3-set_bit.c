#include "main.h"
/**
 * set_bit - unction that sets the value of a bit to 1 at a given index
 *
 * @n: unsigned int to set bit
 * @index: position to set bit
 * Return: 1 / -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = 1;

	/* check if index is oyt of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/* set bit at index */
	bit <<= index;
	*n = (*n | bit);
	return (1);
}
