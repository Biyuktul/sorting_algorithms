#include "sort.h"

/**
 * swap - swap two consecutive nodes
 * @node: pointer to the node tobe swaped
 * @head: double pointer to start of the list
 * Return: pointer to the first of two swaped nodes
 */

listint_t *swap(listint_t *node, listint_t **head)
{
	listint_t *back = node->prev;
	listint_t *current = node;

	back->next = current->next;
	if (current->next != NULL)
		current->next->prev = back;

	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev != NULL)
		current->prev->next = current;
	else
		*head = current;
	return (current);
}

/**
 * insertion_sort_list - sorts a doubly linked-list using insertion sorted
 * @list: pointer to the start of the list tobe sorted
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr;

	if (list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;

	while (curr)
	{
		while ((curr->prev != NULL) && (curr->prev->n > curr->n))
		{
			curr = swap(curr, list);
			print_list(*list);
		}
		curr = curr->next;
	}
}
