#include "lists.h"

/**
  * listint_len - function that returns the
  * number of elements in a linked listint_t list.
  * @h: poibter of node
  * Return: number of elements in a linked
  *
  */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
