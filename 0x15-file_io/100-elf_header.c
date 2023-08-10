#include "main.h"
/**
 * get_endianness -function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
unsigned short get_endianness(void)
{
	int num = 1;
	char *p_num;

	p_num = (char *)&num;

	if (*p_num == 1)
		return (1);
	return (2);
}
/**
 * swap_bytes -function that swaps bytes.
 *
 * @value: byte to swap.
 * Return: swapped byte.
 */
unsigned short swap_bytes(unsigned short value)
{
	return ((value >> 4) | (value << 4));
}
/**
 * elf_magic -function that checks for elf files and prints magic field
 * of an elf file.
 *
 * @magic: struct elf
 */
void elf_magic(elfs magic)
{
	int i;

	if (magic.e_ident[0] == 0x7f && magic.e_ident[1] == 'E')
	{
		if (magic.e_ident[2] == 'L' && magic.e_ident[3] == 'F')
		{
			printf("ElF Header:\n");
			printf("  Magic:   ");
			for (i = 0; i < 16; i++)
			{
				printf("%02x%c", magic.e_ident[i], i < 15 ? ' ' : '\n');
			}
		}
	}
	else
	{
		write(STDERR_FILENO, "Not an ELF file\n", 32);
		exit(98);
	}
}
/**
 * elf_class -function that prints the class field of an elf header file
 *
 * @class: struct elf
 */
void elf_class(elfs class)
{
	const char classes[3][12] = {
		"ELFNONE",
		"ELF32",
		"ELF64"
		};

	printf("  %-35s", "Class:");
	printf("%s\n", classes[class.e_ident[4]]);
}
/**
 * elf_data -function that prints the data field of an elf header.
 *
 * @data: struct elf
 * Return: 1 if it is little, 2 for big endian
 */
int elf_data(elfs data)
{
	const char *datas[3] = {
		"Unknown data format",
		"2's complement, little-endian",
		"2's complement, big-endian"
		};

	printf("  %-35s", "Data:");
	printf("%s\n", datas[data.e_ident[5]]);

	return (data.e_ident[5]);
}
/**
 * elf_version -function that prints the version field of an elf header.
 *
 * @version: struct elf
 */
void elf_version(elfs version)
{
	const char versions[2][10] = {
		"invalid",
		"current"
		};

	printf("  %-35s", "Version:");
	printf("%d (%s)\n", version.e_ident[6], versions[version.e_ident[6]]);
}
/**
 * elf_osabi -function that prints the OS/ABI field from an elf header.
 *
 * @osabi: struct elf
 */
void elf_osabi(elfs osabi)
{
	const char *osabis[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Startus Technologies OpenVOS"
		};

	printf("  %-35s", "OS/ABI:");
	if (osabi.e_ident[7] < 19)
		printf("%s\n", osabis[osabi.e_ident[7]]);
	else
		printf("<unknown: %x>\n", osabi.e_ident[7]);
}
/**
 * elf_abi -funciton that prints the ABI version field form an elf header.
 *
 * @abi: struct elf
 */
void elf_abi(elfs abi)
{
	printf("  %-34s %u\n", "ABI Version:", abi.e_ident[8]);
}
/**
 * elf_type -funciton that prints the type field from an elf header.
 *
 * @type: struct elf
 * @swap: little or big
 */
void elf_type(elfs type, int swap)
{
	const char *types[5] = {
		"NONE (Unknown file)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
		};

	if (swap)
		type.e_type = swap_bytes(type.e_type);

	printf("  %-35s", "Type:");
	printf("%s\n", types[type.e_type]);
}
/**
 * elf_entry -function that prints the entry field from an elf header.
 *
 * @entry: struct elf
 * @swap: little or big
 */
void elf_entry(elfs entry, int swap)
{
	if (swap)
		entry.e_entry = swap_bytes(entry.e_entry);

	printf("  %-35s", "Entry point address:");
	printf("0x%x\n", entry.e_entry);
}
/**
 * main -function that prints the elf header
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned short elf_endian, sys_endian;
	int swap = 0;
	int fd, bytes_read;
	elfs elf;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 50);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error while opening file\n", 26);
		close(fd);
		exit(98);
	}

	bytes_read = read(fd, &elf, sizeof(elfs));
	if (bytes_read == -1)
	{
		write(STDERR_FILENO, "Error while reading file\n", 26);
		close(fd);
		exit(98);
	}
	sys_endian = get_endianness();
	elf_magic(elf);
	elf_class(elf);
	elf_endian = elf_data(elf);
	elf_version(elf);
	elf_osabi(elf);
	elf_abi(elf);
	if (sys_endian != elf_endian)
		swap = 1;
	elf_type(elf, swap);
	elf_entry(elf, swap);
	close(fd);
	return (0);
}
