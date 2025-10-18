#include "main.h"
#include <stdio.h> 

int main(void)
{
    ssize_t bytes;

    bytes = read_textfile("test.txt", 100);
    if (bytes == 0)
    {
        write(2, "Failed to read or print the file\n", 34);
        return (1);
    }
    printf("\nBytes read and printed: %zd\n", bytes);

    return (0);
}

