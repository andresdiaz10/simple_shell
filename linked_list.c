#include "library.h"

/**
 * init_path - copy the all directories of the path
 * @path: path to copy
 *
 * Return: a pointer to the init linked list
 */
list_t *init_path(char **path)
{
	list_t *dirs = NULL;
	char *aux;

	aux = _getenv("PATH");
	if (*aux == '\0')
		return (NULL);
	dirs = get_path_dirs(aux, path);
	return (dirs);
}

/**
 * get_path_dirs - tokenize a list of directories into a linked list
 * @aux: env PATH
 * @path: path to copy
 *
 * Return: a pointer to the head to linked list
 */
list_t *get_path_dirs(char *aux, char **path)
{
	list_t *head = NULL;
	list_t *path_N;
	const char *DELIM = ":\0";
	char *token = NULL;

	if (!(aux))
		return (NULL);
	*path = _strdup(aux);
	path_N = malloc(sizeof(list_t));
	if (!(path_N))
		return (NULL);
	path_N->next = head;
	token = strtok(*path, DELIM);
	path_N->dir = token;
	head = path_N;
	while (token)
	{
		token = strtok(NULL, DELIM);
		if (!(token))
			break;
		path_N = malloc(sizeof(list_t));
		if (!(path_N))
			return (NULL);
		path_N->dir = token;
		path_N->next = head;
		head = path_N;
	}
	return (head);
}

/**
 * create_path - create the path to run the command
 * @commands: command to run
 * @path: path to create
 *
 * Return: pointer to the path for use the command
 */
char *create_path(char ***commands, list_t *path)
{
	char *aux_commands;
	char *cp_path = NULL;
	list_t *direct;
	size_t size_commands;
	size_t size_path;
	struct stat aux;

	direct = path;
	if (!(commands))
		return (NULL);
	if (!(direct))
		return (NULL);
	aux_commands = *(commands)[0];
	size_commands = _strlen(aux_commands);
	while (direct)
	{
		size_path = _strlen(direct->dir);
		cp_path = (char *) malloc(size_path + size_commands + 2);
		if (!(cp_path))
			return (NULL);
		*cp_path = '\0';
		_strcat(cp_path, direct->dir);
		_strcat(cp_path, "/");
		_strcat(cp_path, aux_commands);
		if (stat(cp_path, &aux) == 0) /*INVALID PATH OR FILENAME */
			break;
		free(cp_path);
		cp_path = NULL; /* NO DANGLING POINTER :D */
		direct = direct->next;
	}
	return (cp_path);
}
