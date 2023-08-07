#include "main.h"
/**
 * create_file -function that creates a file
 *
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}

	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
