#include "lists.h"
/**
 * sum_listint -that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: linked list
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
