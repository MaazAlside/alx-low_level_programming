#include "main.h"

/**
  * append_text_to_file - This function adds text at EOF
  * @filename: name of the file to append data to.
  * @text_content: data to append to file
  * Return: 1 if succesfull else -1 on err
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_open = 0, file_write = 0, counter = 0;

	if (filename == NULL)
		return (-1);

	file_open = open(filename, O_WRONLY | O_APPEND);
	if (file_open == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[counter])
		{
			counter++;
		}
		file_write = write(file_open, text_content, counter);
		if (file_write == -1)
			return (-1);
	}
	close(file_open);
	return (1);
}
