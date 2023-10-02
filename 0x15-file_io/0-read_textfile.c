#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, fileDescriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, bytesRead) != bytesRead)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	free(buffer);
	close(fileDescriptor);
	return (bytesRead);
}
