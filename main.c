#include "main.h"

/**
 * main - core of shell
 * Return: integer
 */

int main(void)
{
	char *bf = NULL, **args;
	size_t record_size = 0;
	ssize_t bf_size = 0;
	int exit_status = 0;

	while (1)
	{
		if (isatty(0))
			printf("hsh$ ");

		bf_size = getline(&bf, &record_size, stdin);
		if (bf_size == -1 || _strcmp("exit\n", bf) == 0)
		{
			free(bf);
			break;
		}
		bf[bf_size - 1] = '\0';

		if (_strcmp("env", bf) == 0)
		{
			_env();
			continue;
		}

		if (vacant_line(bf) == 1)
		{
			exit_status = 0;
			continue;
		}

		args = _split(bf, " ");
		args[0] = finds_path(args[0]);

		if (args[0] != NULL)
			exit_status = exec(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_status);
}
