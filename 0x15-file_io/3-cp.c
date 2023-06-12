#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *new_file(char *fileinput);
void close_file(int data);

/**
 * new_file - Copies 1024 bytes.
 * @fileinput: name of the file
 *
 * Return: A pointer to the new created buffer.
 */
char *new_file(char *fileinput)
{
	char *fileinput;

	fileinput = malloc(sizeof(char) * 1024);

	if (fileinput == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fileinput);
		exit(99);
	}

	return (fileinput);
}

/**
 * close_file - Closes file.
 * @data: File descriptor to be closed.
 */
void close_file(int data)
{
	int i;

	i = close(data);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", data);
		exit(100);
	}
}

/**
 * main - Funct that copies contents of a file to another file.
 * @argc: number of arguments
 * @argv: arguments vector.
 *
 * Return: Always 0 success.
 *
 * Description: If argument count is incorrect - exit codes.
 **/
int main(int argc, char *argv[])
{
	int file_from, file_to, z, x;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	z = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		x = write(file_to, buff, z);
		if (file_to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

z = read(file_from, buff, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);

} while (z > 0);

free(buff);
close_file(file_from);
close_file(file_to);

return (0);
}
