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

	if (!head)
		return (NULL);

	current = head;

	if (index == 0)
		return (head);

	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	return (current);
}
