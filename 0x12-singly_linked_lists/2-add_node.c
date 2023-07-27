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

	if (!head || !str)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	temp->next = *head;
	temp->str = malloc(sizeof(char) * i + 1);
	if (temp->str == NULL)
		return (NULL);

	temp->str = strdup(str);
	*head = temp;
	return (*head);
}
