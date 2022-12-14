#include "lists.h"
/**
 * free_listint2 - frees list and sets head = NULL
 * @head: double pointer to head
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

