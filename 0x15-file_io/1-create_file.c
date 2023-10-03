#include "main.h"


/**
* create_file - Creates a file with a given content.
* @filename: The name of the file to create.
* @text_content: The content to write into the file.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor;

	ssize_t bytesWritten;
	size_t i;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR);

	if (fileDescriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			bytesWritten = write(fileDescriptor, &text_content[i], 1);

			if (bytesWritten == -1)
			{
				close(fileDescriptor);
				return (-1);
			}
		}
	}

	close(fileDescriptor);

	return (1);
}
