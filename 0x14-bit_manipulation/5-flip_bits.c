#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: integer
 * @m: integer
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;  /* XOR the two numbers to get bit diffrence */

	/* Count the number of set bits in the XOR result */
	while (x != 0)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
