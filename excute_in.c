#include "main.h"
/**
 * excute_in - process the arguments passed from shel
 * @argv: arguments passsed
 *
 * Return: nothing
 */
void excute_in(char **argv)
{
	int i;

	i = fork();
	if (i == -1)
		perror("(incorrect input) ");
	if (i == 0)
	{
		if (argv != NULL)
		{
			if (execve(full_path(argv[0]), argv, NULL) == -1)
				exit(1);
		}
	}
	else
	{
		wait(&i);
	}
}
