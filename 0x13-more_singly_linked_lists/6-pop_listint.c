#include "lists.h"
/**
 * pop_listint -that deletes the head node of a listint_t linked list.
 *
 * @head: linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int number;

	if (!*head)
		return (0);
	temp = *head;
	number = temp->n;
	current = temp->next;
	free(temp);
	*head = current;
	return (number);
}

