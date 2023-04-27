#include "main.h"
/**
 * free_2d_ar- two dimensional array free
 * @argv: two dimensional array to be freed
 * @height: height of array
 *
 * Return: NULL
 */
void free_2d_ar(char **argv, int height)
{
	int i;

		for (i = 0; i < height; i++)
			free(argv[i]);
	
	free(argv);
}
