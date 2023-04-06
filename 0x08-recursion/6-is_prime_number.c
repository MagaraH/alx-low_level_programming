#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - function that checks for prime numbers
 *
 * @n: number to check if is prime
 * Return: 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (prime(n, i));
}
/**
 * prime - function checking for prime number
 *
 * @n: number
 * @i: itration variable
 * Return: 0
 */
int prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}
