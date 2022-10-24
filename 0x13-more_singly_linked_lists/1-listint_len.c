#include "lists.h"

/**
 * listint_len - gets size of list
 * @h: head pointer to list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}

