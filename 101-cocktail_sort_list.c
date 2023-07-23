#include "sort.h"

int size_list(listint_t *list);
void swap(listint_t *temp, listint_t *s_t, listint_t **list);

/**
  * cocktail_sort_list - cocktail sort  a linked list
  * @list: list head
  */
void cocktail_sort_list(listint_t **list)
{
	int l, i;
	listint_t *temp;
	listint_t *st;

	if (list == NULL)
		return;
	temp = *list;
	l = size_list(*list);
	for (i = 0; i < l; i++)
	{
		if (temp == *list)
		{
			while (temp)
			{
				st = temp->next;
				if (st)
				{
					if (temp->n > st->n)
					{
						swap(temp, st, list);
						continue;
					}
				} else
					break;
				temp = temp->next;
			}
		} else
		{
			while (temp)
			{
				st = temp->prev;
				if (st)
				{
					if (temp->n < st->n)
					{
						swap(st, temp, list);
						continue;
					}
				} else
					break;
				temp = temp->prev;
			}
		}
	}
}

/**
  * swap - swap to elements of a list
  * @temp: first element
  * @s_t: second element
  * @list: head of list
  */
void swap(listint_t *temp, listint_t *s_t, listint_t **list)
{
	listint_t *zero_t = temp->prev;
	listint_t *third_t = s_t->next;

	if (zero_t)
		zero_t->next = s_t;
	else
		*list = s_t;
	s_t->prev = zero_t;
	if (third_t)
		third_t->prev = temp;
	temp->next = third_t;

	s_t->next = temp;
	temp->prev = s_t;

	print_list(*list);
}

/**
  * size_list - size of linked list
  * @list: head of list
  * Return: int
  */
int size_list(listint_t *list)
{
	listint_t *temp = list;
	int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
