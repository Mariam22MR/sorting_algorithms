#include "sort.h"

/**
 * insertion_sort_list - Insertion sort doubly linked list
 * @list: address of pointer to head node.
 *
 * Return: NULL.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	i = (*list)->next;

	while (i != NULL)
	{
		temp = i;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev == NULL)
				*list = temp;

			print_list((const listint_t *)*list);
		}

		i = i->next;
	}
}
