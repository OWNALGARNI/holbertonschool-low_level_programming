#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or exits with error codes on failure.
 *
 * Description:
 * If the number of arguments is not correct, prints usage message and exits with 97.
 * If file_from cannot be read, prints error and exits with 98.
 * If file_to cannot be created or written to, prints error and exits with 99.
 * If any file descriptor cannot be closed, prints error and exits with 100.
 * Copies data in chunks of 1024 bytes.
 * Sets file permissions to rw-rw-r-- for created file.
 */
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}

while ((bytes_read = read(file_from, buffer, 1024)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
close(file_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(file_from);
close(file_to);
exit(98);
}

if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
close(file_to);
exit(100);
}

if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}
