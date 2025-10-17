#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include "lists.h"

int _putchar(char c);

void print_string(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
}

void print_list(list_t *head)
{
    list_t *temp = head;

    while (temp != NULL)
    {
        print_string(temp->str);
        _putchar('\n');
        temp = temp->next;
    }
}

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node(&head, "World");
    add_node(&head, "ChatGPT");

    print_list(head);

    return (0);
}

