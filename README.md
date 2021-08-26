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
README.md | Information of the Simple Shell
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

## Usage 

>./hsh

>$
>$ env  
>USER=mahalaksmy
>SHLVL=1
>HOME=/home/mahalaksmy
>OLDPWD=/mnt/c/Users/Maha Laksmy Amariles/Documents/Holberton/simple_shell
>WSL_DISTRO_NAME=Ubuntu-20.04
>LOGNAME=mahalaksmy
>NAME=LAPTOP-JQ7KVVKJ

>$ls 

>2_utility.c   AUTHORS   create_error.c   hsh         linked_list.c   man_1_simple_shell   set_commands.c  'Untitled Diagram.drawio'

>$pwd

>/mnt/c/Users/Maha Laksmy Amariles/Documents/Holberton/simple_shell

>$exit

>➜  simple_shell git:(main) ✗ 

## AUTHORS

Laura Sofia Caicedo <3383@holbertonschool.com>
Andres Zapata <3340@holbertonschool.com>
Maha Laksmy Garcia <3354@holbertonschool.com>

## MAN SIMPLE SHELL

>man_1_simple_shell

