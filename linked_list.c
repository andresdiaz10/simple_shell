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
