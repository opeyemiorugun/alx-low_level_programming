#include "lists.h"
/**
 * get_nodeint_at_index -that returns the nth node of a listint_t linked list
 *
 * @head: linked list
 * @index: index
 * Return: a pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 1; i <= index && current->next; i++)
	{
		current = current->next;
	}

	if (!current->next)
		return (NULL);
	return (current);
}
