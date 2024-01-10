#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *head, *lk;

	if (!list || !list->next)
		return (0);
	head = list;
	lk = list;

	while (lk != NULL && head != NULL && head->next != NULL)
	{
		lk = lk->next;
		head = head->next;
			if (lk == head)
			{
				return (1);
			}
	}
	return (0);
}
