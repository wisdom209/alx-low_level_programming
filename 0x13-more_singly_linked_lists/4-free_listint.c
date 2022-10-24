#include "lists.h"

/**
 * free_listint - frees a list
 * @head: address of head node
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}

