#include "monty.h"

/**
 * _push - add node to the stack
 * @head: the head pointer
 * @line_number: the line number
 *
 * Return: (void)
 */
void _push(stack_t **head, unsigned int line_number)
{
	int n, j = 0;

	if (!choice.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(choice.ptr);
		free(choice.data);
		_free(*head);
		exit(EXIT_FAILURE);
	}

	if (choice.arg[0] == '-')
		j++;

	while (choice.arg[j] != '\0')
	{
		if (choice.arg[j] < '0' || choice.arg[j] > '9')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(choice.ptr);
			free(choice.data);
			_free(*head);
			exit(EXIT_FAILURE);
		}
		j++;
	}

	n = atoi(choice.arg);

	if (choice.point == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

