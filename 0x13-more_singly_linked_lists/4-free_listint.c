#include "lists.h"
/**
 * free_listint -function that frees a list.
 *
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *current;

	temp = head;
	while (temp)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
}
