#ifndef MAIN_H
#define MAIN_H

/*malloc*/
#include <stdlib.h>

/*std library*/
#include <stdio.h>

/*
 * <unistd.h> defines misc symbolic constants, types,
 * & declares miscellaneous functions.
 */
#include <unistd.h>


/*
 * <fcntl.h> defines requests and arguments for use by
 * the functions fcntl() and open().
 */
#include <fcntl.h>


/*
 * <sys/types.h> header contains a number definitions of
 * basic derived types that should be used whenever appropriate.
 */
#include <sys/types.h>


/*
 * <sys/stat.h> defines the structure of the data returned by
 * fstat(), lstat(), and stat()
 */
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file_descriptor(int fd);

#endif

