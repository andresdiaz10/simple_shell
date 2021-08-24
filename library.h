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
 * @nex: pointer to another struct
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
#endif /*_LIBRARY_H_*/
