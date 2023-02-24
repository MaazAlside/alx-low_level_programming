#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t
  * @head: pointer to pointer to the first node of the list
  * @index: index of the node to delete, starting from 0
  *
  * Return: 1 if succeeded, or -1 if the list is empty or
  * the index is out of range
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);

	return (1);
}

