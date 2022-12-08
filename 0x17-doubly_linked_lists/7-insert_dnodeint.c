#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of node
 * @idx: index to add
 * @n: number to add
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
