#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point for testing the free_list function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
list_t *head;

head = NULL;
add_node_end(&head, "Bob");
add_node_end(&head, "&");
add_node_end(&head, "Kris");
add_node_end(&head, "love");
add_node_end(&head, "asm");
print_list(head);
free_list(head);
head = NULL;
return (0);
}
