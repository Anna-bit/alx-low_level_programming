#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_fileinput(char *file);
void close_file(int dt);

/**
 * create_fileinput - Copies 1024 bytes.
 * @file: name of the file
 *
 * Return: A pointer to new file.
 */
char *create_fileinput(char *file)
{
	char *fileinput;

	fileinput = malloc(sizeof(char) * 1024);

	if (fileinput == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fileinput);
}

/**
 * close_file - Closes file.
 * @dt: File descriptor to be closed.
 */
void close_file(int dt)
{
	int i;

	i = close(dt);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dt);
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
	int fl_from, fl_to, z, x;
	char *fileinput;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileinput = create_fileinput(argv[2]);
	fl_from = open(argv[1], O_RDONLY);
	z = read(fl_from, fileinput, 1024);
	fl_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fl_from == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fileinput);
			exit(98);
		}

		x = write(fl_to, fileinput, z);
		if (fl_to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fileinput);
			exit(99);
		}

z = read(fl_from, fileinput, 1024);
fl_to = open(argv[2], O_WRONLY | O_APPEND);

} while (z > 0);

free(fileinput);
close_file(fl_from);
close_file(fl_to);

return (0);
}
