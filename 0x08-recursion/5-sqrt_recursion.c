#include "main.h"
int calc_sqrt_recursion(int n, int i)
/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
 * calc_sqrt_recursion - function calculating squareroot of number n
 *
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (calc_sqrt_recursion(n, i));
}
/**
 * calc_sqrt_recursion - function calculating squareroot of number n
 *
 * @i: function parameter
 * @n: function parameter
 * Return: 0
 */
int calc_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_sqrt_recursion(n, i + 1));
}
