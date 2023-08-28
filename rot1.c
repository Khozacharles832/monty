#include "monty.h"

/**
 * _rot1 - rotates the stack to the top
 * @head: the head pointr
 * @line_number; the line number
 *
 * Return: (void)
 */
void _rotl(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head, *new;

	(void)line_number;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	new = (*head)->next;
	new->prev = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = new;
}
