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
	if (*head == NULL)
	{
		return (-1);
	}

	dlistint_t *temp;
	unsigned int i = 0;


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
	return (1);
}
