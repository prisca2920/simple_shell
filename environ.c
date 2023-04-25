#include "main.h"

/**
 * _getenv - displays the environment
 * @en_v: the environment variable
 * Return: environ content and variable
 */

char *_getenv(char *en_v)
{
	int j = 0, x;
	int status;

	while (environ[j])
	{
		status = 1;

		for (x = 0; environ[j][x] != '='; x++)
		{
			if (environ[j][x] != en_v[x])
				status = 0;
		}
		if (status == 1)
			break;
		j++;
	}
	return (&environ[j][x + 1]);
}

/**
 * _env - prints environment
*/
void _env(void)
{
	int j = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		j++;
	}
}
