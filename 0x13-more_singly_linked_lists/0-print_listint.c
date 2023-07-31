#include "lists.h"
/**
 * print_listint -prints all the elements of a linked list.
 *
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
