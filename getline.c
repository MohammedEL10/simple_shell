#include "shell.h"

char *get_line(void)
{
    char * line  = NULL;
    size_t len = 0;
    ssize_t n;
write(STDOUT_FILENO, "$ ", 2);
if (isatty(STDOUT_FILENO))
n = getline(&line, &len,stdin);
if (n == -1)
    {
        free(line);
           return (NULL);
    }



    return(line);
}
