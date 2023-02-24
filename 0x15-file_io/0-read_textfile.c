#include "main.h"
/**
  * read_textfile -Reads a textfile and prints the contents to the POSIX STDOUT
  * @filename: The name of the file to read from
  * @letters: The number of characters it should print to the STDOUT
  * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read = 0, bytes_written = 0;
	char *buffer;

	if (filename == NULL || Letter == NULL)
	{
		return (0);
	}
	bytes_read = open(filename, O_RDONLY);
	if (bytes_read < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytes_written = read(bytes_read, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_written);
	if (bytes_written < 0)
		return (0);

	close(bytes_read);
	free(buffer);
	return (bytes_written);
}
