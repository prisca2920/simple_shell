#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: the compared string
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
 * _strcpy - copies the string pointed to by src
 * @dest: first char
 * @src: second char
 * Return: the comparison
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}

/**
 * _split - tokenizez the string
 * @str: first char
 * @sep: second char
 * Return: the tokenized path
 */

char **_split(char *str, char *sep)
{
	char *aux, **split_str;
	int i = 0;

	aux = strtok(str, sep);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		return (NULL);
	}

	while (aux)
	{
		split_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_str);
}

/**
 * _strcat - concatenates two strings
 * @dest: first char
 * @src: second char
 * Return: the concatenation
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a += 1)
	{}

	for (b = 0; src[b] != '\0'; b += 1)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * _strlen - finds the string length
 * @s: parameter
 * Return: the length
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
