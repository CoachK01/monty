#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: linked list's head address.
 * @line_number: line number from file.
 * Return: nothing
 */
void _pstr(stack_t **head, unsigned int line_number)
{
	int n;
	stack_t *tmp = *head;

	(void)line_number;
	if (*head == NULL)
	{
		printf("\n");
		return;
	}


	while (tmp)
	{
		n = tmp->n;
		if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		{
			putchar(n);
			tmp = tmp->next;
		}
		else
			break;
	}
	putchar('\n');
}
