#include "main.h"
/**
 * read_textfile -a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: path to file.
 * @letters:  number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buf = (char *) malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);
}


