#include "lists.h"

/**
 * print_listint - Function printing all the elements of a linked list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *head)
{
size_t num = 0;

while (head)
{
printf("%d\n", head->n);
num++;
head = head->next;
}
return (num);
}
