#include "shell.h"
/**
 * **strtow - splits a string into words. Repeat delimiters are ignored
 * @str: the input string
 * @delimiters: the delimiter string
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str, char *delimiters)
{
	int i, j, k, m, num_words = 0;
	char **result;

	if (str == NULL || str[0] == '\0')

		return NULL;

	if (!delimiters)
		delimiters = " ";

	for (i = 0; str[i] != '\0'; i++)

		if (!is_delim(str[i], delimiters) && (is_delim(str[i + 1], delimiters) || str[i + 1] == '\0'))
			num_words++;
	if (num_words == 0)

		return (NULL);
	result = malloc((1 + num_words) * sizeof(char *));
	if (!result)

		return (NULL);

	for (i = 0, j = 0; j < num_words j++)
	{
		while (is_delim(str[i], delimiter))
			i++:

				k = 0;
		while (!is_delim(str[i + k], delimiters) && str[i + k] != '\0')
			k++;

		result[j] = malloc((k + 1) * sizeof (char));
		if (!result[j])
		{
			for (k = 0; k < j; k++)
				free(result[k]);
			free(result);
			return (NULL);
		}

		for (m = 0; m < k; m++)
			result[j][m] = str[i++];
		result[j][m] ='\0';
	}
	result[j] = NULL;

	retun (result);
}
/**
 * **strtow2 - splits a string into words
 * @str: the input string
 * @delimiter: the delimiter
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow2(char *str, char delimiter)
{
	int i, j, k, m, num_words = 0;
	char **result;

	if (str == NULL || str[0]  == '\0')
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != delimiter && str[i + 1] delimiter) ||
				(str[i] @
