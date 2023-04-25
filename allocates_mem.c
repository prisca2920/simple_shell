#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: first parameter to be checked
 * @size: second parameter
 * Return: NULL or a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}
