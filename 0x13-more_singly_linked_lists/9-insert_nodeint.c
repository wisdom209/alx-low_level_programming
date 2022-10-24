#include "lists.h"

/**
 * insert_nodeint_at_index - insert at an index
 * @head: double pointer to head
 * @idx: index to insert (zero based)
 * @n: data at index
 *
 * Return: Node at index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int size = 0, i = 0;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}

	newnode->n = n;

	if (idx > size - 1)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = *head;
		(*head) = newnode;
		return (newnode);
	}
	if (idx == size - 1)
	{
		temp->next = newnode;
		return (newnode);
	}

		temp = *head;

	for (i = 0; i < idx; i++)
		temp = temp->next;

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}

