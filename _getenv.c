#include "shell.h"

char *_getenv(const char *name)
{
    unsigned int x;
    long unsigned int j = 0;
    char *value;
    int aux;

    while (name[j] != '\0')
    {
        j++;
    }

    for (x = 0; environ[x] != NULL; x++)
    {
        aux = strncmp(environ[x], name, j);
        if (aux == 0)
            break;
    }
    value = environ[x] + (j + 1);
    if (value == NULL)
    {
        return (NULL);
    }
    return (value);
}
