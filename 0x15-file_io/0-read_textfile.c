#include "main.h"

/**
 * read_textfile - reads a specified number of characters from a file
 * @filename: the name of the file to be read
 * @letters: the number of characters to read
 *
 * Return: the total number of characters read, or 0 if an error occurs
 * or if the file cannot be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    size_t i;
    FILE *file;
    size_t bytesRead;

    if (filename == NULL)
    {
        return 0;
    }

    
    file = fopen(filename, "r");

    if (file == NULL)
    {
        return 0;
    }


    buffer = (char *)malloc(letters * sizeof(char));
    if (buffer == NULL)
    {
        fclose(file);
        return 0;
    }

    bytesRead = 0;

    for (i = 0; i < letters; i++)
    {
        int c = fgetc(file);

        if (c == EOF)
        {
            break;
        }
        buffer[i] = (char)c;
        bytesRead++;
    }

    fclose(file);


    for (i = 0; i < bytesRead; i++)
    {
        printf("%c", buffer[i]);
    }


    free(buffer);

    return bytesRead;
}
