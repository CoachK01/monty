#include "monty.h"

/**
 * free_list - frees the linked list
 * @head: head of the stack
 */

void free_list(stack_t **head)
{
	if (!(*head))
		return;
	while ((*head)->next)
	{
		(*head) = (*head)->next;
		free((*head)->prev);
	}
	free(*head);
}
