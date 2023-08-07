#include "main.h"

/**
 * append_text_to_file -Function that appends text at end of file.
 * @filename: Pointer to name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: Function fails or filename is NULL - -1.
 *         Success - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int apple, x, n = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (n = 0; text_content[n];)
n++;
}

apple = open(filename, O_WRONLY | O_APPEND);
x = write(apple, text_content, n);

if (apple == -1 || x == -1)
return (-1);

close(apple);

return (1);
}
