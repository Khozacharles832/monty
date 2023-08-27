#include "monty.h"

choice_s choice = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (on success), else 1
 */
int main(int argc, char **argv)
{
	char line[1024];
	FILE *ptr;
	stack_t *stack = NULL;
	unsigned int counter = 0;
	size_t len;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	ptr = fopen(argv[1], "r");
	choice.ptr = ptr;

	if (!ptr)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), ptr))
	{
		choice.data = line;
		counter++;

		len = strlen(line);

		if (len > 0 && line[len - 1] == '\n')
			line[len - 1] = '\0';

		execute(line, &stack, counter, ptr);
	}

	_free(stack);
	fclose(ptr);

	return (0);
}
