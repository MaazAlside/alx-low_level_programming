#include "lists.h"
/**
 * dlistint_len - Count the number of elements in a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description: This function counts and returns the number of elements
 * (nodes) in a given doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elemntCount = 0;


	while (h != NULL)
	{
		elemntCount++;
		h = h->next;
	}

	return (elemntCount);
}
