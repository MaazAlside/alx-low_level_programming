#include "lists.h"
/**
* add_dnodeint_end - Add a new node at the end of a doubly linked list
* @head: A pointer to the pointer to the head node.
* @n: The integer to be added to the new node.
*
* Return: The address of the new node, or NULL on failure.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *newNode;

	if (!head)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	temp = malloc(sizeof(dlistint_t));

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
