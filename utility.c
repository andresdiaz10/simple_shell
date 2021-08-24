#include "library.h"
/**
 * _strncmp - compare two strings
 * @str1: pointer to a string
 * @str2: pointer to a string
 * @bytes: number of bytes to compare
 * Return: Less than 0 if str1 is shorter than str2.
 *	0 if str1 and str2 match.
 *	Greater than 0 if str1 is longer than str2.
 */
int _strncmp(const char *str1, const char *str2, size_t bytes)
{
	size_t i;

	for (i = 0 ; *(str1 + i) && *(str2 + i) && i < bytes ; i++)
	{
		if (*(str1 + i) > *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		else if (*(str1 + i) < *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
	}
	if (i == bytes)
		return (0);
	else
		return (-1);
}
