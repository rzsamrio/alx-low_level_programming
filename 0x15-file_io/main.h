#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void terr_check(int status, int err_flag, char *s);
void err_check(int status, int err_flag, char *s);
int close_buffer(int stat, int fd, int fd2, char *buffer);
void tclose_buffer(int fd, int fd2, char *buffer);

#endif
