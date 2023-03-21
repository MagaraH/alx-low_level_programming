#include "main.h"
/**
 * _isalpha - function that checks for alphabeths
 *
 * @c: parameter to check
 * Return: 1 if its an alphabeth
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	{
		return (0);
	}
}
