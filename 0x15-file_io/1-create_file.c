#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with a given content.
 * @filename: The name of the file to create.
 * @text_content: The content to write into the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytesWritten;
	int fileDescriptor;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL,
	S_IRUSR | S_IWUSR);

	if (fileDescriptor == -1)
	{
		perror("Error opening file");
		return (1);
	}



	bytesWritten = write(fileDescriptor, text_content,
	strlen((char *)text_content));

	if (bytesWritten == -1)
	{
		perror("Error writing to file");
		close(fileDescriptor);
		return (1);
	}


	close(fileDescriptor);

	return (1);

}
