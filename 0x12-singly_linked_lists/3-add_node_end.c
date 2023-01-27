#include "lists.h"

/**
 *add_node_end - function that adds a new node at the beginning of list_t list.
 *@head: pointer
 *@str: string
 *Return: node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode, *lastNode;

	lastNode = *head;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->len = i;
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
	} else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;

	}

	return (newNode);
}
