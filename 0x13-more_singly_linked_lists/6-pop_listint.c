#include "lists.h"
/**
  * pop_listint - deletes the head node of a linked list.
  * @head: pointer to the first node of the linked list
  * Return: the data inside the elements that was deleted,
  * or 0 if the list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (head_data);
}
