#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <sys/wait.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define prompt "Shellshocked $"

extern char **environ;
char *path_name;
char **in_array;
int st;
char *dir_name;
int print_env(char **environ);
int get_token(char *user_input, char **argv);
int check_run(char **argv, char **paths);
char *turtle_path(char **environ);
int check_turtle(char *f_name, char *dir_name);
char *turtle_or_not(char *path, char *f_name);
void turtle_cross_road_or_not(char **argv, char *dir_name);
char *turtle_bath(int length, char *path_name);
int turtle_surgery(char *input, char **in_array);
char *shell_cracked(char **input, char *delim);
void set_turtle_free_or_not(char **cmdS);
int sleepy_turtle(char *user_input, size_t bsize);
void turtle_pen(char **environ);
int turtle_size(char *input);
void shell_cracked2(char **input, char *delim);
void launch_turtle(char **in_array);
#endif
