#ifndef files
#define files
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
