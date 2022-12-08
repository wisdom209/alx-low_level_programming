#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
