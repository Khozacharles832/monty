#include "monty.h"

/**
 * _pint - pint's the top element in a stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
