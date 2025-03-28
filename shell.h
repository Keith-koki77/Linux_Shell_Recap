#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
/*****#include <sys/types.h>****/
/****#include <sys/stst.h>***/
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 1024

/************** FUNCTION PROTOTYPE *****************/
void prompt(void);
char *read_line(void);
char **parse_input(char *input);
int execute_command(char **args);
void free_args(char **args);

/**************** BUILT-IN COMMANDS *****************/
void shell_exit(void);
void shell_env(void);

#endif
