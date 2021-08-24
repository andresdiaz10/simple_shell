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

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to a string duplicate
 */
char *_strdup(char *str)
{
	size_t size;
	char *dup;

	if (!(str))
		return (NULL);
	while (*(str + size) != '\0')
		size++;
	dup = (char *) malloc(size + 1);
	if (!(dup))
		return (NULL);
	_strcpy(dup, str);
	return (dup);
}
/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed by des.
 * @str: Pointer to the destination of copied string.
 * @src: Pointer to the src of the source string.
 *
 * Return: Pointer to str.
 */
char *_strcpy(char *str, const char *src)
{
	size_t i;

	for (i = 0 ; *(src + i) != '\0' ; i++)
		*(str + i) = *(src + i);
	*(str + i) = '\0';
	return (str);
}
