#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t list.
  * @h: pointer
  * Return: return number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *list;
	size_t elements = 0;

	list = h;
	while (list)
	{
		printf("%d\n", list->n);
		i++;
		list = list->next;
	}
	return (elements);
}
