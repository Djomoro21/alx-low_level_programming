#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>

int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int set_bit(unsigned long int *n, unsigned int index);


#endif /*MAIN H*/
