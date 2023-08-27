#include "monty.h"

/**
 * _pall - prints all the elements of a stack
 * @head: the head pointer
 * @line_number: non used variable
 *
 * Return: (void)
 */
void _pall(stack_t **head, unsigned int line_number)
{

	stack_t *h;

	(void)line_number;

	h = *head;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
