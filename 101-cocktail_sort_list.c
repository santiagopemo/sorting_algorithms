#include "sort.h"
/**
 * swap - swap nodes in a listint_t linked list
 * @a: listint_t linked list node
 * @b: listint_t linked list node
 * @list: listint_t linked list head
 */
void swap(listint_t *a, listint_t *b, listint_t **list)
{
	a->next = b->next;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;
	if (a->next)
		a->next->prev = a;
	if (b->prev)
		b->prev->next = b;
	else
		*list = b;
}
/**
 * cocktail_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Cocktail shaker sort algorithm
 * @list: head to a listint_t linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *i;
	int swapped = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (; swapped;)
	{
		swapped = 0;
		for (i = *list; i->next;)
		{
			if (i->n > i->next->n)
			{
				swap(i, i->next, list);
				print_list(*list);
				swapped = 1;
			}
			else
				i = i->next;
		}
		if (swapped == 0)
			break;
		swapped = 0;
		for (i = i->prev; i->prev; i = i->prev)
		{
			if (i->n > i->next->n)
			{
				swap(i, i->next, list);
				print_list(*list);
				swapped = 1;
			}
		}
	}
}
