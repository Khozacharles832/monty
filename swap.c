#include "monty.h"

/**
 * _swap - swaps the top 2 elements of a stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int len, value;

	len = 0;
	temp = *head;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap stack too short\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	value = temp->n;
	temp->n = temp->next->n;
	temp->next->n = value;
}
