#include "main.h"

/**
 * finds_path - searches file between the path
 * @command: first parameter
 * Return: the command path
 */

char *finds_path(char *command)
{
	char *path = _getenv("PATH"), *path_twn;
	char **path_torn;
	char *path_cat = NULL;
	int i = 0, path_len = 0;
	struct stat info;

	if (stat(command, &info) == 0)
		return (command);

	path_twn = malloc(_strlen(path) + 1);

	path_twn = _strcpy(path_twn, path);
	path_torn = _split(path_twn, ":");

	while (path_torn[i])
	{
		path_len = _strlen(path_torn[i]);

		if (path_torn[i][path_len - 1] != '/')
			path_cat = _strcat(path_torn[i], "/");

		path_cat = _strcat(path_torn[i], command);

		if (stat(path_cat, &info) == 0)
			break;

		i++;
	}

	free(path_twn);

	if (!path_torn[i])
	{
		free(path_torn);
		return (NULL);
	}

	free(path_torn);
	return (path_cat);
}
