#include "lists.h"
/**
 * add_node_end -finction that adds a new node to the end of a linked lists.
 *
 * @head: Pointer to the first struct in a list
 * @str: strng to be duplicated.
 * Return: the address of a new element of NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *current;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	temp->len = i;
	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (*head);

}
