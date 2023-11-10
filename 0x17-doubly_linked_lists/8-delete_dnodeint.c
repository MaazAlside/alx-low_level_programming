#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;

	while (i < index && temp->next != NULL)
	{
		if (i == index)
		{
			temp->next = temp->next->next;
			free(temp);
		}
		temp = temp->next;
		i++;

	}
	return (0);
}
