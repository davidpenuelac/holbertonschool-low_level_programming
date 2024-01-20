#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: text_content
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (filename == NULL)
return (-1);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
size_t text_length = strlen(text_content);
ssize_t bytes_written = write(file_descriptor, text_content, text_length);

if (bytes_written == -1 || (size_t)bytes_written != text_length)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
