#include "sort.h"

/**
 * sortedInsert - inserts a node in it's correct position
 * @sortedHead: pointer to start of sorted list
 * @curr: pointer to the node to be inserted
 * Return: pointer to the sorted head
 */
void sortedInsert(listint_t **sortedHead, listint_t *curr)
{
        listint_t *new;

        if (*sortedHead == NULL)
                *sortedHead = curr;
        else if ((*sortedHead)->n >= curr->n)
        {
                curr->next = *sortedHead;
                curr->next->prev = curr;
                *sortedHead = curr;
        }

        else
        {
                new = *sortedHead;

                while (new->next != NULL && new->next->n < curr->n)
                        new = new->next;
                
                curr->next = new->next;

                if (new->next != NULL)
                        curr->next->prev = curr;
                
                new->next = curr;
                curr->prev = new;

        }
}


/**
 * insertion_sort_list - sorts a doubly linked-list using insertion sorted
 * @list: pointer to the start of the list tobe sorted
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
        listint_t *curr = *list;
        listint_t *sorted = NULL;
        while (curr != NULL)
        {
                listint_t *currNext = curr->next;
                print_list(*list);
                curr->prev = NULL;
                curr->next = NULL;
                sortedInsert(&sorted, curr);
                curr = currNext;
        }
        *list = sorted;
}