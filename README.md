# simple_shell

## Description The Project

The Simple Shell is a simple UNIX command interpreter written entirely in C. The program runs based on bash commands obtained from the input stream by the user. Any text seperated by a single space is considered to be an argument. The respective command typed by the user is then executed as if in a UNIX shell.

## Requirements The Project

* Allowed editors: vi, vim, or emacs.
* All files were compiled on Ubuntu 14.04 LTS
* Programs and functions were compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* Code should use the Betty style. It is checked using betty-style.pl and betty-doc.pl
* No more than 5 functions per file
* All header files should be include guarded
* System calls are only used when needed

## Compilation 

> gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

## Symbol Of The System (Prompt)

> $

## Files Of The Project

Name File | Description
------------- | -------------
README.md | Content from cell 2
Library.h | Simple_shell's prototypes
Main.c    | Shell main function
linked_list.c | Call the functions for  copy the all directories of the path
Get_commands.c | Funtions principals of the projects
Set_commands.c | Funtions for the Get_commands file
Utility.c | Some of string functions that utility of the project.
Exit_system.c | Exit process
Built.c | built-in command that prints environment variables

## Functions Of The Project

Name Function | Description
------------- | -------------
_strcat    | concatenates a string to another
_strcmp    | compares string to another
_strncmp   | compare two strings
_itoa.c    | convert int to string
_strcpy    | copies the string pointed to variable
_strcpy    | copies the string pointed to variable
_strdup    | Duplicate a string

