#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  *@head: head of linked lest
  *@n: data of new node
  *
  *Return: address of the new element,
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
