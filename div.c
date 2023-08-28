#include "monty.h"

/**
 * _div - divide 2 top elements of the stack
 * @head: the head pointer
 * @line_pointer: the line pointer
 *
 * Return: (void)
 */
void _div(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n /= (*head)->n;
	_pop(head, line_number);
}
	
