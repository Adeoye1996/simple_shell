#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <unistd.h>

#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH '\0'

/**
 * _strcpy - Copies a string.
 * @dest: The destination.
 * @src: The source.
 *
 * Return: Pointer to the destination.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	if (dest == src || src == NULL)

		return (dest);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if allocation fails.
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)

		return (NULL);

	while (str[length] != '\0')
		length++;

	ret = malloc(sizeof(char) * (length + 1));

	if (!ret)
		return (NULL);

	for (length++; length--;)
		ret[length] = str[length];

	return (ret);
}
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;

	return 1;
}

/**
 * _puts - Prints an input string.
 * @str: The string to be printed.
 *
 * Return: Nothing.
 */
void _puts(const char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
#endif /* SHELL_H */
