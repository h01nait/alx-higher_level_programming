#include "lists.h"

/**
 * is_palindrome_helper - function helper to the original is palindrome
 * that uses two pointers(forward, backward) to the node of the
 * linked list to make sure that our list is same from backward and forward
 *
 * @forward: pointer to linkedlist that will be started at the end
 * of the linkedlist
 * @backward: pointer to linkedlist that will be started at the
 * beginning of the linkelist
 * Return: NULL if the given list is not palindrome otherwise it returns
 * the pointer to the head of the linkedlist
 */
listint_t *is_palindrome_helper(listint_t *forward, listint_t *backward)
{
	listint_t *is_palindrome_address;

	if (forward->next)
	{
		is_palindrome_address = is_palindrome_helper(forward->next, backward);
		if (!is_palindrome_address || is_palindrome_address->n != forward->n)
			return (NULL);
		if (!is_palindrome_address->next)
			return (is_palindrome_address);
		return (is_palindrome_address->next);
	}
	if (forward->n != backward->n)
		return (NULL);
	if (!backward->next)
		return (backward);
	return (backward->next);
}

/**
 * is_palindrome - function that checks wether the given
 * list is palindrom or not
 *
 * @head: the address to the head of the linkedlist
 * Return: 0 means the given list is not palindrome, otherwise 1
 */
int is_palindrome(listint_t **head)
{
	if (!*head)
		return (1);
	if (is_palindrome_helper(*head, *head))
		return (1);
	return (0);
}
