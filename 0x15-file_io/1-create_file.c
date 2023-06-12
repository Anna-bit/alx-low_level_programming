#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: Filename is NULL or function fails - -1.
 *         Success - 1.
 */

int create_file(const char *filename, char *text_content)
{
int data, x, i = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (i = 0; text_content[i];)
i++;
}

data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(data, text_content, i);

if (data == -1 || x == -1)
return (-1);

close(data);

return (1);
}
