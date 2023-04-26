#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i += 1)
	{}

	for (j = 0; src[j] != '\0'; j += 1)
	{
	dest[i] = src[j];
	i++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _split - tokenizes a string
 * @str: first parameter
 * @delim: second parameter
 * Return: the tokenized path
 */

char **_split(char *str, char *delim)
{
	char *len, **tok_str;
	int j = 0;

	len = strtok(str, delim);

	tok_str = (char **)_calloc(100, sizeof(char *));

	if (!tok_str)
	{
	free(tok_str);
	return (NULL);
	}

	while (len)
	{
	tok_str[j] = len;
	len = strtok(NULL, delim);

	j++;
	}
	return (tok_str);
}

/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: the comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
	if (*s1 != *s2)
	return (*s1 - *s2);

	s1++;
	s2++;
	}
	return (0);
}

/**
 * _strlen - finds the length of a string
 * @s: first parameter
 * Return: the length
 *
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;

	return (j);
}

/**
 * _strcpy - copies one string to another
 * @dest: first parameter
 * @src: second parameter
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (i);
}
