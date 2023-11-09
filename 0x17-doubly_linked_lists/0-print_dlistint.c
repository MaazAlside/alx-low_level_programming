#include "lists.h"
/**
 * print_dlistint - Print elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Description: This function prints all the elements of a doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elemntCount = 0;


	while (h != NULL)
	{
		elemntCount++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elemntCount);
}
