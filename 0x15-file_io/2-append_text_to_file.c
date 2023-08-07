#include "main.h"
/**
 * append_text_to_file -function that appends text at the end of a file.
 *
 * @filename: path to file
 * @text_content: text content to append.
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
