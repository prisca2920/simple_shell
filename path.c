#include "main.h"

/**
 * finds_path - searches file between the path
 * @command: first parameter
 * Return: the command path
 */

char *finds_path(char *command)
{
	char **path_tok, *path_twn;
	char *path = _getenv("PATH");
	char *path_cat = NULL;
	struct stat info;
	int j = 0, path_len = 0;

	if (stat(command, &info) == 0)
		return (command);

	path_twn = malloc(_strlen(path) + 1);

	path_twn = _strcpy(path_twn, path);

	path_tok = _split(path_twn, ":");

	while (path_tok[j])
	{
	path_len = _strlen(path_tok[j]);

	if (path_tok[j][path_len - 1] != '/')
		path_cat = _strcat(path_tok[j], "/");

	path_cat = _strcat(path_tok[j], command);

	if (stat(path_cat, &info) == 0)
		break;

	j++;
	}

	free(path_twn);

	if (!path_tok[j])
	{
	free(path_tok);
	return (NULL);
	}

	free(path_tok);
	return (path_cat);
}
