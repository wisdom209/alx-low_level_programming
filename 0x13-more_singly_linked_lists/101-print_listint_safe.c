#include "lists.h"

/**
 * print_listint_safe - prints lists with loops
 * @head: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *visited = malloc(sizeof(listint_t));
	const listint_t *temp = head;
	listint_t *temp2 = (listint_t *)head;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		if (temp->next == visited)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
		temp2 = (listint_t *)temp;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		temp2->next = (listint_t *)visited;
	}
	return (i);
}

