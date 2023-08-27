#include "monty.h"

/**
 * _pop - removes the top most element of the stack
 * @head: the pointer to the stack
 * @line_number: the line number
 *
 * Return: (void)
 */
void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *set;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	set = *head;
	*head = (*head)->next;
	free(set);
}
