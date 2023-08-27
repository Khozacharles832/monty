#include "monty.h"

/**
 * _free - frees a doubly linked list
 * @head: the head pointer
 *
 *Return: (void)
 */
void _free(stack_t *head)
{
	stack_t *temp;

	temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
