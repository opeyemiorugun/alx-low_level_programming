#include "lists.h"
/**
 * free_list -function that frees a list.
 *
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
