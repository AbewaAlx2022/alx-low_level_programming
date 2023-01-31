#include "lists.h"
/**
 * free_listint2 -  a function that frees linked list
 * @head: pointer to the listint_t list to be freed
 * Return: no Return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
