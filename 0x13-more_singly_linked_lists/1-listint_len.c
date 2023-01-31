#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type to traverse
 *
 * Return: return to the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
