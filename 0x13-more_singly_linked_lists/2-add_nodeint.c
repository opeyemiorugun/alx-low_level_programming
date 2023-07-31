#include "lists.h"
/**
 * add_nodeint -adds a node at the beginning of a linked list
 *
 * @head: linked list
 * @n: integer to add
 * Return: the address of the new element of NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	if (*head)
		temp->next = *head;
	else
		temp->next = NULL;

	*head = temp;
	return (*head);
}
