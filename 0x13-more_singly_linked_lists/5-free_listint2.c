#include "lists.h"
/**
 * free_listint2 -function that frees a list.
 *
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	temp = *head;
	while (temp)
	{
		current = temp->current;
		free(temp);
		temp = current;
	}
	*head = NULL;
}
