#include "lists.h"
/**
* free_dlistint - free all linked list node
* @head: A pointer to the pointer to the head node.
*
* Return: Nothing.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
