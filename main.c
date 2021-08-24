#include "library.h"

/**
 * execute - execute the commands in stdin
 * @av: commands array
 * Return: exit status
 */
int execute(char **av)
{
	int prueba = 0;

	(void) av;
	return (prueba);
}
/**
 * new_Prompt - Print a new prompt with Ctrl-c
 * @sign: signal
 */
void new_Prompt(int __attribute__((unused)) sign)
{
	write(STDOUT_FILENO, "\n($) ", 5);
}
/**
 * main - run a simple shell interpreter
 * @ac: number of arguments supplied to the programa
 * @av: array pointer to the arguments
 *
 * Return: value of the last command
 */
int main(int __attribute__((unused)) ac, char **av)
{
	int last_value;

	signal(SIGINT, new_Prompt);
	last_value = execute(av);
	return (last_value);
}
