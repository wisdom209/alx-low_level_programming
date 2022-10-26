#include "lists.h"
#include <stdint.h>

int print_listformat(const listint_t *head);

/**
 * print_listint_safe - prints lists with loops
 * @head: pointer to first node
 *
 * Return: size of list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *slow = head, *fast = head;
	int i = 0;

	if (head == NULL)
		exit(98);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow->next != fast->next)
			{
				slow = slow->next;
				fast = fast->next;
			}
			while (temp != NULL)
			{
				if (temp == fast)
				{
					printf("[%p] %d\n", (void *)temp, temp->n);
					i++;
					printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
					return (i);
				}
				i++;
				printf("[%p] %d\n", (void *)temp, temp->n);
				temp = temp->next;
			}

		}
	}
	i = print_listformat(head);
	return (i);
}

/**
 * print_listformat - prints formatted list with address
 * @head: pointer to head node
 *
 * Return: no of elements in list
*/
int print_listformat(const listint_t *head)
{
	const listint_t *temp = head;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}

	return (i);
}

