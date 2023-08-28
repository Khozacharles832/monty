#include "monty.h"

/**
 * _mod - returns the modulus of 2 stack elements
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _mod(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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

	(*head)->next->n %= (*head)->n;
	_pop(head, line_number);
}
	
