#ifndef MAIN_H
#define MAIN_H

#define MAX_LEN 5120

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif