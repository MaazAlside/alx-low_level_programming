#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head:  A pointer to the pointer to the head node.
 * @index: index of the node
 *
 * Return: node if exit or NULL if not exit
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;

	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
