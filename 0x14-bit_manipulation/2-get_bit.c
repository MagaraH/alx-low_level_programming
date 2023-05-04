#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: integer
 * @index: positon of bit
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = (n >> index);
	if (index > 32)
		return (-1);
	return (bit_value & 1);
}
