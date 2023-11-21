 #include "shell.h"

/*
 * simple shell main function
 * @ac: count of args
 * @av: arguments
 * Return: always 0 (success)
 */

#include <stdio.h>

int main(int ac, char *av[])
{
    char *line = NULL;
    char **command = NULL;
    int status =0;
    (void)ac;
    (void)av;
 
     

    while (1)
    {
        line = get_line();
        if (line == NULL) /*reache EOF strg + D*/
         {
         if (isatty(STDOUT_FILENO))
         write(STDOUT_FILENO, "\n",1);
          return (status);
         }

          
         command = token(line);
         if (!command)
         continue;


         status = _execute(command, av);

         

    }

}