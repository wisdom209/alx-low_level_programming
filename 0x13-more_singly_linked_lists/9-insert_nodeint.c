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

	newnode->n = n;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	temp = *head;
	if (idx > size)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
		temp = temp->next;

	if (temp->next == NULL)
	{
		temp->next = newnode;
		return (newnode);
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}

