#include "sort.h"

/**
 * insertion_sort_list - sort algortithm
 * @list: list that we need to sort
 * Return: the new list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp2;

	tmp2  = (*list)->next;
	while (tmp2)
	{
		while (tmp2->prev && tmp2->prev->n > tmp2->n)
		{
			tmp2 = swapnode(tmp2, list);
			print_list(*list);
		}
		tmp2  = tmp2->next;
	}
}

/**
 * swapnode - swap 2 nodes
 * @node: first node
 * @list: second list
 * Return: new node
 */

listint_t *swapnode(listint_t *node, listint_t **list)
{
	listint_t *first = node->prev, *second = node;

	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = first->prev;
	first->prev = second;
	if (second->prev)
		second->prev->next = second;
	else
		*list = second;
	return (second);
}
