#include "lists.h"
/**
* delete_dnodeint_at_index - fun delete a node at a given position.
* @head: A pointer to the pointer to the head node.
* @index:  index of the list where the new node should be deleted.
*
* Return:  -1 if fail or 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
