#include "monty.h"

/**
 * f_queue - changes and points to queue mode
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void f_queue(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;

	choice.point = 1;
}

/**
 * addqueue - adds a new node to the end of a queue
 * @head: the head pointer to the stack
 * @new: the new value to add to the queue
 *
 * Return: (void)
 */
void addqueue(stack_t **head, int _new)
{
	stack_t *new_node, *temp;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = _new;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return;
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_node->prev = temp;
	temp->next = new_node;
}
