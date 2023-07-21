#include "sort.h"
#include <stdlib.h>

void sorted_insert(listint_t *node, listint_t **sorted_list);

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort.
 *
 * This function sorts the given doubly linked list in ascending order
 * using the insertion sort algorithm. It updates the head of the list
 * to point to the sorted list.
 *
 * @list: Double pointer to the head of the doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted_list = NULL;
	listint_t *node = NULL;
	listint_t *next = NULL;

	node = (*list);
	while (node)
	{
		next = node->next;
		node->prev = NULL;
		node->next = NULL;
		sorted_insert(node, &sorted_list);
		print_list(sorted_list);
		node = next;
	}
	*list = sorted_list;
}

/**
 * sorted_insert - Inserts a node into a sorted doubly linked list.
 *
 * @node: Pointer to the node to be inserted.
 * @sorted_list: Pointer to the head of the sorted doubly linked list.
 */
void sorted_insert(listint_t *node, listint_t **sorted_list)
{
	listint_t *cur = NULL;

	/* if the list is empty */
	if (*sorted_list == NULL)
	{
		*sorted_list = node;
	}

	/*
	 * if the node is to be inserted at the beginning
	 * of the doubly linked list
	 */
	else if ((*sorted_list)->n >= node->n)
	{
		node->next = *sorted_list;
		node->next->prev = node;
		*sorted_list = node;
	}
	else
	{
		cur = *sorted_list;
		while (cur->next != NULL && cur->next->n < node->n)
		{
			cur = cur->next;
		}
		node->next = cur->next;
		if (cur->next != NULL)
		{
			node->next->prev = node;
		}

		cur->next = node;
		node->prev = cur;
	}
}
