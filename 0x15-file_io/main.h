#ifndef IO
#define IO
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
typedef struct ELF_HD
{
	unsigned char e_ident[16];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned int e_version;
	unsigned int e_entry;
	unsigned int e_phoff;
	unsigned int e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
} elfs;
#endif
