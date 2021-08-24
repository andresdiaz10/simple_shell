#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define TRUE 1

extern char **environ;

/* MAIN.C */

int execute(char **av);
void new_Prompt(int __attribute__((unused)) sign);

/* ENVIRON */
char *_getenv(const char *name);
#endif /*_LIBRARY_H_*/
