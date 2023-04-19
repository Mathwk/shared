#include "main.h"
/**
 * main - simple shell program
 *
 * Return: Success 0
 */
int main()
{
	char *command_in;
	size_t n = 0;
	int getl_out;

	while (1)
	{
	printf("(sudoshell) $ ");
	getl_out = getline(&command_in, &n, stdin);
	if (getl_out == -1)
	{
		printf("\n\n[Disconnected...]\n");
		return (-1);
	}
	printf("%s", command_in);

	free(command_in);
	}
	return (0);
}
