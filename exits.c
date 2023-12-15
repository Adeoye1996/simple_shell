#include "shell.h"

/**
 * _strncpy - Copies a string with a specified length.
 * @dest: The destination string to be copied to.
 * @src: The source string.
 * @n: The number of characters to be copied.
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	char *original_dest = dest;

	for (i = 0; i < n - 1 && src[i] != '\0'; i++)

	{
		dest[i] = src[i];
	}

    /* Null-terminate the destination string */

	dest[i] = '\0';

	return (original_dest);
}

/**
 * _strncat - Concatenates two strings with a specified maximum number of bytes.
 * @dest: The first string.
 * @src: The second string.
 * @n: The maximum number of bytes to be used.
 * Return: A pointer to the concatenated string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	int i, j;
	char *original_dest = dest;

    /* Find the end of the destination string */

	for (i = 0; dest[i] != '\0'; i++)
		;

    /* Append characters from src to dest, up to the specified limit */

	for (j = 0; j < n && src[j] != '\0'; j++, i++)

	{
		dest[i] = src[j];
	}

    /* Null-terminate the concatenated string */

	dest[i] = '\0';

	return (original_dest);
}

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be parsed.
 * @c: The character to look for.
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(const char *s, char c)
{
	do

	{
		if (*s == c)

		{
			return ((char *)s);
		}
	} while (*s++ != '\0');

	return (NULL);
}
