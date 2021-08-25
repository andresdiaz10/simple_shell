#include "head.h"
/**
 * check_exit - function that exits the program.
 * @args: pointer that contains all the arguments of the program.
 * @buffer: string that contains all the arguments taked by getline.
 * @exit_value: number to exit.
 * Return: Nothing, it is a void function :D
 */
void funexit(char **args, char *buffer, int *exit_value)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		free(args);
		free(buffer);
		exit(*exit_value);
	}
	else
	{
		free(args);
		free(buffer);
		exit(exit_value);
	}
}
