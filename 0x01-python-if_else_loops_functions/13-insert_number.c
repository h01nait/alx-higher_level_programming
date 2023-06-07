#include "lists.h"

/**
 * insert_node - function that insert node based
 * on they order position
 *
 * @head: the head of the linkedlist
 * @number: number to be inserted in the list
 * Return: return the inserted node or null if error happens
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node, *tmp, *current;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = number;
	node->next = NULL;
	if (!*head)
		*head = node;
	else if ((*head)->n > node->n)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		current = *head;
		tmp = current->next;
		while (tmp)
		{
			if (tmp->n > node->n)
			{
				node->next = tmp;
				current->next = node;
				return (node);
			}
			current = tmp;
			tmp = tmp->next;
		}
		current->next = node;
	}
	return (node);
}
