#include "library.h"

/**
 * execute - execute the commands in stdin
 * @av: commands array
 * Return: exit status
 */
int execute(char **av)
{
	list_t *path = NULL;
	char *prompt = "(:) ";
	char **commands = NULL;
	char *buffer = NULL;
	char *cp_path = NULL;
	char *total_path = NULL;
	ssize_t bytes_c = 1;
	int exit_status = 0;
	int flag = 1;
	int history = 1;

	(void)av;
	(void)history;
	(void)path;
	path = init_path(&cp_path);
	if (!(isatty(STDIN_FILENO)))
		flag = 0;
	while (TRUE)
	{
		exit_status = 0;
		if (flag)
			write(STDOUT_FILENO, prompt, 4);
		fflush(stdout);
		bytes_c = get_commands(&buffer, &commands);
		if (bytes_c == -1)
			break; /* BUILT_IN EXIT */
		total_path = create_path(&commands, path);
	}
	return (exit_status);
}
/**
 * new_Prompt - Print a new prompt with Ctrl-c
 * @sign: signal
 */
void new_Prompt(int  sign)
{
	(void)sign;
	write(STDOUT_FILENO, "\n(:) ", 5);
}
/**
 * main - run a simple shell interpreter
 * @ac: number of arguments supplied to the programa
 * @av: array pointer to the arguments
 *
 * Return: value of the last command
 */
int main(int  ac, char **av)
{
	int last_value;

	(void)ac;
	signal(SIGINT, new_Prompt);
	last_value = execute(av);
	return (last_value);
}
