#include <fcntl.h>   
#include <unistd.h> 
#include <stdlib.h>  
#include <string.h> 

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: string to append at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t len;

if (filename == NULL)
return (-1);

if (text_content == NULL)
{
fd = open(filename, O_WRONLY);
if (fd == -1)
return (-1);
close(fd);
return (1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

len = strlen(text_content);
bytes_written = write(fd, text_content, len);

close(fd);

if (bytes_written == (ssize_t)len)
return (1);

return (-1);
}
