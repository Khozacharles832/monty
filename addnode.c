#include "monty.h"

/**
 * addnode - adds a new node to the head of stack
 * @head: the head pointer
 * @new: the new node
 *
 * Return: (void)
 */
void addnode(stack_t **head, int _new)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = _new;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
}
