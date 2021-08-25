#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define TRUE 1

extern char **environ;

/**
 * struct list_s - struct type linked list
 * @dir: directory path
 * @next: pointer to another struct
 */
typedef struct list_s
{
	char *dir;
	struct list_s *next;
} list_t;
/* MAIN.C */
int execute(char **av);
void new_Prompt(int __attribute__((unused)) sign);

/* ENVIRON */
char *_getenv(const char *name);

/* UTILITY */
int _strncmp(const char *str1, const char *str2, size_t bytes);
char *_strdup(char *str);
char *_strcpy(char *str, const char *src);
void _print1(int fildes, char *str);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);
/*LINKED LIST*/
list_t *get_path_dirs(char *aux, char **path);
list_t *init_path(char **path);
char *create_path(char ***commands, list_t *path);


/* SET COMMAND */
ssize_t get_commands(char **buffer, char ***commands);
void put_nullc(char **buffer);
int commands_lenght(ssize_t bytes, char **buffer);
void separate_commands(char ***commands, char **buffer, int bytes);
/* BUILT_IN */
void built_env(char ***commands, int num_commands);
void built_exit(char ***commands, int num_commands, ssize_t *exit_status);
#endif /*_LIBRARY_H_*/
