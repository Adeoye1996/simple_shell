#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string to be copied to
 * @src: the source string
 * @n: the number of characters to be copied
 * Return: the pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	char *s = dest;

	for (i = 0; src[i] != '\0' && i < n - 1; i++)

	{
		dest[i] = src[i];
	}

	while (i < n)

	{
		dest[i] = '\0';
		i++;
	}

	return (s);
}

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: the maximum number of characters to be concatenated
 * Return: the pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	char *s = dest;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; i++, j++)

	{
		dest[i] = src[j];
	}

	if (j < n)
		dest[i] = '\0';

	return (s);
}

/**
 * _strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: a pointer to the first occurrence of the character in the string, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	do

	{
		if (*s == c)

			return (s);
	}

	while (*s++ != '\0');

	return (NULL);
}

