#include "monty.h"

/**
 * _pint - prints the value at the top of the stack.
 * @head: the address of the linked list's head.
 * @line_number: line number of line we're reading.
 * Return: nothing
 */

void _pint(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		fprintf(
			stderr,
			"L%d: can't pint, stack empty\n",
			line_number
			);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
