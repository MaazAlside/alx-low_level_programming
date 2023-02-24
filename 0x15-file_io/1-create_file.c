#include "main.h"

/**
  * create_file - creates a file and adds permission to it
  * @filename: The name of the file to be created
  * @text_content: content to be placed in the created file
  * Return: 1 if successfull and -1 on err.
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_read = 0, bytes_written = 0, counter = 0;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	bytes_read = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (bytes_read == -1)
		return (-1);

	while (text_content[counter])
	{
		counter++;
	}
	bytes_written = write(bytes_read, text_content, counter);
	if (bytes_written == -1)
		return (-1);

	close(bytes_read);
	return (1);
}
