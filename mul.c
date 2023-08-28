#include "monty.h"

/**
 * _mul - multiplies 2 elements on the stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _mul(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: cant mul, stack too short\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n *= (*head)->n;
	_pop(head, line_number);
}
