#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
