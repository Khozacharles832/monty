#include "monty.h"

/**
 * _puchar - prints the char on top of the stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _pchar(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;

	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (char)temp->n);
}
