#include "lists.h"
/**
 * insert_nodeint_at_index -function that inserts a new node
 * at a given position.
 *
 * @head: linked list
 * @idx: index
 * @n: data to add.
 * Return: pointer to updated list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current, *begin;
	unsigned int i;

	if (!head || *head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	/*Go to the index*/
	current = *head;
	begin = *head;
	for (i = 0; i < idx && current; i++)
	{
		current = current->next;
		if (i > 0)
			begin = begin->next;
	}
	if (current == NULL)
		return (NULL);
	/*Add the current pointer to the end of the new node*/
	temp->next = current;
	/* Add it back to the end of the beginning*/
	begin->next = temp;
	return (*head);
}
