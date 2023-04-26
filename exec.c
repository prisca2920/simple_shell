#include "main.h"

/**
 * exec - it executes command in file path
 * @args: varibles
 * Return: status exited
 */

int exec(char **args)
{
	int x = fork(), status;

	if (x == 0)
	{
		if (execve(args[0], args, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}

	return (status);
}
