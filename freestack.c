#include "monty.h"

/**
 * free_stack - frees the stack
 * @head: head of the stack
 */

void free_stack(stack_t **head)
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
