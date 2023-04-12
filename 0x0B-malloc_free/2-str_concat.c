#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *conct;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0 ; s2[i] != '\0' ; i++)
		{
			len2++;
		}
	}
	len == len1 + len2;
	conct = (char *)malloc(sizeof(char) * (len + 1));
	if (conct == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1 ; i++)
		conct[i] = s1[i];
	for (j = 0 ; j < len2 ; j++, i++)
		conct[i] = s2[j];
	conct[len] = '\0';
	return (conct);
}
