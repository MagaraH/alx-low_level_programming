#include "main.h"
int _strlen_recursion(char *s);
int char_check(char *s, int i, int length);
/**
 * is_palindrome -  function that returns
 * 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to check
 * Return: 0
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s == 0)
		return (1);
	return (char_check(s, i, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * char_check - function that checks recursevely for palindrome
 *
 * @s: string checked
 * @i: iteration variable
 * @length: string length
 * Return: 0
 */
int char_check(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (char_check(s, i + 1, length - 1));
}
