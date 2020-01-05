#include "monty.h"

/**
 * treat_line - function that gets the line from monty file and tokenize it
 * to check for the correct command.
 * @head: linked list' head address.
 * @fp: file pointer.
 * @line: line we're treating from the monty file.
 * @line_number: line number.
 * Return: nothing.
 */
void treat_line(stack_t **head, FILE *fp, char *line, unsigned int line_number)
{
	char *token = NULL;

	token = strtok(line, " \n");
	while (token && token[0] == ' ')
		token = strtok(NULL, " \n");
	if (!token)
		return;
	treat_token(head, fp, line, token, line_number);
}
