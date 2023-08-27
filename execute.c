#include "monty.h"

/**
 * execute - executes the opcode
 * @stack: the head linked list of the stack
 * @line_number: the line counter
 * @ptr: the file pointer
 * @data: the value added
 *
 * Return: (int)
 */
int execute(char *data, stack_t **stack, unsigned int line_number, FILE *ptr)
{
	char *operate;
	unsigned int i;

	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{NULL, NULL}
				};
	
	operate = strtok(data, " \n\t");

	if (operate && operate[0] == '#')
		return (0);
	choice.arg = strtok(NULL, " \n\t");

	for (i = 0; opst[i].opcode; i++)
	{
		if (strcmp(operate, opst[i].opcode) == 0)
		{
			opst[i].f(stack, line_number);
			return (0);
		}
	}

	if (operate)
	{
		fprintf(stderr, "L%d: unknown instruction%s\n", line_number, operate);
		fclose(ptr);
		free(data);
		_free(*stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}
