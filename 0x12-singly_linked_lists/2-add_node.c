#include "lists.h"
/**
 * add_node -adds a node at the beginning of a linked list
 *
 * @head: list
 * @str: string
 * Return: a pointer to the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	if (*head == NULL)
		temp->next = NULL;
	else
		temp->next = *head;

	temp->len = i;
	temp->str = strdup(str);
	*head = temp;
	return (*head);
}
