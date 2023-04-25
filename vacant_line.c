#include "main.h"

/**
 * vacant_line - it checks if there is a line vacant
 * @bf: line
 * Return: either 0 or 1
 */

int vacant_line(char *bf)
{
	int j;

	for (j = 0; bf[j] != '\0'; j++)
	{
		if (bf[j] != ' ')
			return (0);
	}
	return (1);
}
