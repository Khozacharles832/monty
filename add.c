#include "monty.h"

/**
 * _add - adds the top 2 elements of the stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _add(stack_t **head, unsigned int line_number)
{
	int result;
	stack_t *temp;

	temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}
	result = (*head)->n + (*head)->next->n;
	*head = (*head)->next;
	(*head)->n = result;
	free(temp);
}
