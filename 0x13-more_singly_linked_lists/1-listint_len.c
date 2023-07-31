#include "lists.h"
/**
 * listint_len -prints the number of elements of a linked list.
 *
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
