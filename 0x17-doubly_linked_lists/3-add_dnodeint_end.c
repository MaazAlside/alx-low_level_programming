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
	dlistint_t *newNode;
	dlistint_t *temp;

	if (!head)
	{
		return (NULL);
	}


	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}


	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newNode->n = n;
	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = NULL;

	return (newNode);
}
