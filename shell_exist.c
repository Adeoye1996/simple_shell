#include "shell.h"
/**
 * _strncpy - Copies a string with a specified limit.
 * @dest: The destination string to be copied to.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 * Return: The concatenated string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (result);
}
/**
 * _strncat - Concatenates two strings with a specified limit.
 * @dest: The first string.
 * @src: The second string.
 * @n: The maximum number of bytes to be used.
 * Return: The concatenated string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')

	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	if (n > 0)
	{
		*dest = '\0';
	}

	return (result);
}
/**
 * _strchr - Locates a character in string.
 * @s: The string to be parsed.
 * @c: The character to look for.
 * Return: A pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
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
