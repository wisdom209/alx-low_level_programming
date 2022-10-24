#include "lists.h"

/**
 * add_nodeint - add node at list start
 * @head: double pointer to head node
 * @n: data to add at start
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
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

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

