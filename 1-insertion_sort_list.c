#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 *
 * @list: Double pointer to the head of the doubly linked list.
 * @node1: First node to be swapped.
 * @node2: Second node to be swapped.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1 == NULL || node2 == NULL)
		return;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;

	print_list(*list);
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *				order using the Insertion sort algorithm.
 *
 * @list: Double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *next_node;
	listint_t *prev_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		next_node = curr->next;
		prev_node = curr->prev;

		while (prev_node != NULL && prev_node->n > curr->n)
		{
			/* Swap the nodes */
			swap_nodes(list, prev_node, curr);
			prev_node = curr->prev;
		}

		curr = next_node;
	}
}
