#include "lists.h"
/**
 * free_listint2 -function that frees a list.
 *
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		temp = *head;
		while (temp)
		{
			current = temp->next;
			free(temp);
			temp = current;
		}
		*head = NULL;
	}
}
