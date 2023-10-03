#include "main.h"

/**
 * copy_file - Copies the content of one file to another.
 * @source_filename: The name of the source file.
 * @destination_filename: The name of the destination file.
 * Return: 0 on success, -1 on failure.
 */
void copy_file(const char *source_filename, const char *destination_filename)
{
	int source_file, destination_file;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	source_file = open(source_filename, O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		exit(98);
	}

	destination_file = open(destination_filename,
							 O_WRONLY | O_CREAT | O_TRUNC,
							 S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (destination_file == -1)
	{
		close(source_file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_filename);
		exit(99);
	}

	while ((bytes_read = read(source_file, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(destination_file, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", destination_filename);
			close(source_file);
			close(destination_file);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		close(source_file);
		close(destination_file);
		exit(98);
	}

	if (close(source_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	if (close(destination_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file);
		exit(100);
	}
}

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, 1 on incorrect usage.
 */
int main(int argc, char *argv[])
{
	const char *source_filename;
	const char *destination_filename;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	source_filename = argv[1];
	destination_filename = argv[2];

	copy_file(source_filename, destination_filename);

	return (0);
}
