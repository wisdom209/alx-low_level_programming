#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to first node
 * @index: index to locate (zero based)
 *
 * Return: address of index node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	/* get size of the list */
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (index > i)
		return (NULL);

	temp = head;
	i = 0;

	while (temp != NULL)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}

	return (temp);
}

