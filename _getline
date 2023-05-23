#include "main.h"
/**
* _getline - Read The Input By User From Stdin
* Return: Input
*/
char *_getline()
{
int i, buffsize = BUFSIZ, r;
char ch = 0;
char *input_buff = malloc(buffsize);

	if (input_buff == NULL)
	{
		free(input_buff);
		return (NULL);
	}
	i = 0;

	while (ch != EOF && ch != '\n')
	{
		fflush(stdin);
		r = read(STDIN_FILENO, &ch, 1);
		if (r == 0)
		{
			free(input_buff);
			exit(EXIT_SUCCESS);
		}
		input_buff[i] = ch;
		if (input_buff[0] == '\n')
		{
			free(input_buff);
			return ("\0");
		}
		if (i >= buffsize)
		{
			input_buff = _realloc(input_buff, buffsize, buffsize + 1);
			if (input_buff == NULL)
			{
				return (NULL);
			}
		}
		i++;
	}
	input_buff[i] = '\0';
	sign_handle(input_buff);
	return (input_buff);
}

/**
 * sign_handle - remove everything after #
 * @buff: input;
 * Return:nothing
 */
void sign_handle(char *input_buff)
{
	int i;

		while (input_buff[i] != '\0')
		{
			if (input_buff[i] == '#')
			{
			input_buff[i] = '\0';
			break;
			}
			i++;
	}
}
