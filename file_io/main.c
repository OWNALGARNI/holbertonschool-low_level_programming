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
/**
 * main - Entry point to test the create_file function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int result;

  
    result = create_file("testfile.txt", "Hello, this is a test.\n");
    if (result == 1)
        printf("File created and text written successfully.\n");
    else
        printf("Failed to create or write file.\n");

    result = create_file("emptyfile.txt", NULL);
    if (result == 1)
        printf("Empty file created successfully.\n");
    else
        printf("Failed to create empty file.\n");

    return (0);
}
