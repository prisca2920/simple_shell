#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

/* global variable*/
extern char **environ;

void *_calloc(unsigned int nmemb, unsigned int size);
char *_getenv(char *en_v);
void _env(void);
int exec(char **args);
char *finds_path(char *command);
int vacant_line(char *bf);
char *_strcat(char *dest, char *src);
char **_split(char *str, char *delim);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
