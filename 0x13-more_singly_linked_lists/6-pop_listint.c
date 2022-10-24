#include "lists.h"

/**
 * pop_listint - delete first node
 * @head: double pointer to head node
 *
 * Return: data in first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int former_head_data = 0;

	if (*head == NULL)
		return (0);

	former_head_data = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (former_head_data);
}

