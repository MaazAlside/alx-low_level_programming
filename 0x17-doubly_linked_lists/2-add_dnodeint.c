#include "lists.h"
/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: A pointer to the pointer to the head node.
 * @n: The integer to be added to the new node.
 *
 * Return: The address of the new node, or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
