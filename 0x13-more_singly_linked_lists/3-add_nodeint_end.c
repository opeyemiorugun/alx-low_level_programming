#include "lists.h"
/**
 * add_nodeint_end -function that adds a node at the end of a linked list
 *
 * @head: linked list
 * @n: integer
 * Return: updated list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head)
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = temp;
	}
	else
		*head = temp;

	return (*head);
}
