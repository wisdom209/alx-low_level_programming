#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to head
 * @index: index to delete
 *
 * Return: 1 if successful
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp1;
	unsigned int i = 0, size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	if (*head == NULL || index > size - 1)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	for (i = 0; i < index - 1; i++)
		temp = temp->next;

	temp1 = temp->next;
	temp->next = temp1->next;

	free(temp1);

	return (1);
}

