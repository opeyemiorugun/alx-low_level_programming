#include "lists.h"
/**
 * delete_nodeint_at_index -function to delete a node at an index
 *
 * @head: linked list
 * @index: index starting from 0
 * Return: -1 if failed, 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp, *begin;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	begin = *head;

	if (index == 0)
	{
		/*Update head to the first new node*/
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index && current; i++)
	{
		current = current->next;
		if (i > 0)
			begin = begin->next;
	}
	if (current == NULL)
		return (-1);

	temp = current->next;
	free(current);
	begin->next = temp;
	return (1);
}
