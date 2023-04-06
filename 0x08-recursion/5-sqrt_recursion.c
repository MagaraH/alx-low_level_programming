#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
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
 * calc_sqrt_recursion - function calculating squareroot
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

