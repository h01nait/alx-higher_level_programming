#include "lists.h"

/**
 * check_cycle - function checks if a linked list contains a cycle or not
 *
 * @list: linked list to be checked check
 * Return: 1 if cycle found else 0
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *tmp;

	current = list;
	if (!current || !current->next)
		return (0);
	tmp = current->next->next;
	while (tmp)
	{
		if (tmp == current)
			return (1);
		if (!tmp->next)
			break;
		tmp = tmp->next->next;
		current = current->next;
	}
	return (0);
}
