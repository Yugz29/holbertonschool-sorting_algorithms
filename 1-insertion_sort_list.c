#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                      order using the insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		node = current;

		while (node->prev != NULL && node->n < node->prev->n)
		{
			node->prev->next = node->next;

			if (node->next)
				node->next->prev = node->prev;

			node->next = node->prev;
			node->prev = node->prev->prev;

			if (node->prev)
				node->prev->next = node;

			else
				*list = node;

			node->next->prev = node;

			print_list(*list);
		}
		current = current->next;
	}
}
