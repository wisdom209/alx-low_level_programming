#include "lists.h"

int free_listintsafely(listint_t **head);
/**
 * free_listint_safe - free_listint_safe
 * @h: double pointer to head node
 *
 * Return: size of list
*/
size_t free_listint_safe(listint_t **h)
{
	const listint_t *temp = *h, *slow = *h, *fast = *h;
	const listint_t *temp2;
	int i = 0;

	if (*h == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			while (slow->next != fast->next)
			{
				slow = slow->next;
				fast = fast->next;
			}
			while (temp != NULL)
			{
				if (temp == fast)
				{
					free((void *)temp);
					*h = NULL;
					i++;
					return (i);
				}
				i++;
				temp2 = temp;
				temp = temp->next;
				free((void *)temp2);
			}
		}
	}

	free_listintsafely(h);
	return (i);
}

/**
 * free_listintsafely - free_listint_safe
 * @head: double pointer to head node
 *
 * Return: size of list
*/
int free_listintsafely(listint_t **head)
{
	listint_t *temp = *head;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		i++;
		free(*head);
		*head = temp;
	}
	*head = NULL;
	return (i);
}

