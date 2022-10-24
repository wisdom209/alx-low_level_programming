#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: double pointer to head node
 *
 * Return: pointer to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;

	return (*head);
}

