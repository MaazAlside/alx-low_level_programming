#include "main.h"

/**
 * read_textfile - reads a specified number of characters from a file
 * @filename: the name of the file to be read
 * @letters: the number of characters to read and print
 * Return: the actual number of characters read and printed,
 * or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char *buffer = (char *)malloc(letters * sizeof(char));
    if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	size_t bytesRead = 0;

	for (size_t i = 0; i < letters; i++)
	{
		int c = fgetc(file);

		if (c == EOF)
			break;

		buffer[i] = (char)c;
		bytesRead++;
	}

	fclose(file);

	size_t bytesWritten = 0;

	for (size_t i = 0; i < bytesRead; i++)
	{
		if (printf("%c", buffer[i]) < 0)
		{
			free(buffer);
			return (0);
		}
		bytesWritten++;
	}

	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesRead);
}
