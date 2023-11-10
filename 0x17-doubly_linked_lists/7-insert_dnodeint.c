#include "lists.h"
/**
* insert_dnodeint_at_index - fun inserts a new node at a given position.
* @h: A pointer to the pointer to the head node.
* @idx: idx is the index of the list where the new node should be added.
* @n: The integer to be added to the new node.
*
* Return:  address of the new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	unsigned int index = 1;

	if (!h)
		return (NULL);
	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (idx == index)
		{
			newNode->next = temp->next;
			temp->next->prev = newNode;
			temp->next = newNode;
			newNode->prev = temp;
			break;
		}
		index++;
		temp = temp->next;
	}
	return (newNode);
}
