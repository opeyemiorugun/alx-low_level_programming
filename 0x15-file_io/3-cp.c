#include "main.h"

#define R_ERROR "Error: Can't read from file %s\n"
/**
 * main -function to copy files
 *
 * @argc: number of arguments
 * @argv: array of command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes_written, fd1, fd2, bytes_read, sz;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, R_ERROR, argv[1]), exit(98);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, R_ERROR, argv[1]);
		exit(98);
	}
	sz = close(fd1);
	if (sz == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	sz = close(fd2);
	if (sz == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
