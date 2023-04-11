#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 *
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *pt_Str;
	int count;

	int str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	pt_Str = malloc((str_len * sizeof(char)) + 1);

	if (pt_Str == NULL)
	{
		return(NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		pt_Str[count] = str[count];
	}
	pt_Str[count] = '\0';
	return (pt_Str);
}
