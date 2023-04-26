#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: first parameter to be checked
 * @size: second parameter
 * Return: NULL or a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count = 0;
	char *len = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = malloc(nmemb * size);

	if (len == NULL)
		return (NULL);

	for (; count < (nmemb * size); count++)
		len[count] = 0;

	return (len);
}
