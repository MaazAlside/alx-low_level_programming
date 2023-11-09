#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head:  A pointer to the pointer to the head node.
 *
 * Return: sum of data node in linkedlist
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
