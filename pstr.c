#include "monty.h"

/**
 * _pstr - prints a string of stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: void
 */
void _pstr(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *head;

	while (temp)
	{
		if (temp->n == 0 || temp->n > 127 || temp->n < 0)
			break;

		printf("%c", (char)temp->n);
		temp = temp->next;
	}
	printf("\n");
}
