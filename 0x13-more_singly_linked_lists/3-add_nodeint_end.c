#include "lists.h"

/**
 * add_nodeint_end - adds a node at list end
 * @head: double pointer to head
 * @n: data to add
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = newnode;
			break;
		}
		temp = temp->next;
	}

	return (newnode);
}

