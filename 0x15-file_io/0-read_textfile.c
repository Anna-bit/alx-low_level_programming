#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and prints it out
 * @filename: name of text file
 * @letters: number of letters
 * Return: actual number of letters read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *precious;
ssize_t data;
ssize_t x;
ssize_t i;

data = open(filename, O_RDONLY);
if (data == -1)
return (0);
precious = malloc(sizeof(char) * letters);
i = read(data, precious, letters);
x = write(STDOUT_FILENO, precious, i);

free(precious);
close(data);
return (x);
}
