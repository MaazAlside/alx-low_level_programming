#include "main.h"
/**
  * read_textfile -Reads a textfile and prints the contents to the POSIX STDOUT
  * @filename: The name of the file to read from
  * @letters: The number of characters it should print to the STDOUT
  * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char *buffer = (char *) malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	size_t bytes_read = fread(buffer, sizeof(char), letters, file);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (bytes_read);
}