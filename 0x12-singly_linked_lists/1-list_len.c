#include "lists.h"
/**
 * list_len -returns the number of elements in a linked list_t.
 *
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	if (h == NULL)
		return (i);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
