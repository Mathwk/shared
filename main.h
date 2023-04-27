#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>

void excute_in(char **argv);
char **string_split(char *str, char del, int length);
void free_2d_ar(char **argv, int height);
char *full_path(char *cmnd);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void sign_handle(char *input_buff);
#endif /* MAIN_H */
