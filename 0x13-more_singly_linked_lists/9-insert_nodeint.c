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
	listint_t *temp, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	if (idx == 0 || *head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		current = *head;
		for (i = 0; i < idx - 1 && current; i++)
		{
			current = current->next;
		}
		if (current == NULL && i != idx - 1)
			return (NULL);
		temp->next = current->next;
		current->next = temp;
	}
	return (temp);
}
