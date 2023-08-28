#ifndef MONTY_H
#define MONTY_H

#include <ctype.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct choice_s - my own defined struct
 * @arg: value of argument
 * @ptr: the file pointer
 * @data: the contents of line
 * @point: shows is stack or queue
 *
 * Description: struct to choose stack or
 * queue according to the int provided
 */
typedef struct choice_s
{
	char *arg;
	FILE *ptr;
	char *data;
	int point;
} choice_s;

extern choice_s choice;

void _pop(stack_t **head, unsigned int line_number);
void _swap(stack_t **head, unsigned int line_number);
void _add(stack_t **head, unsigned int line_number);
void _nop(stack_t **head, unsigned int line_number);
void _pint(stack_t **head, unsigned int line_number);
void _pall(stack_t **head, unsigned int line_number);
void _push(stack_t **head, unsigned int line_number);
void f_queue(stack_t **head, unsigned int line_number);
void addqueue(stack_t **head, int _new);
void addnode(stack_t **head, int _new);
void _free(stack_t *head);
int execute(char *data, stack_t **stack, unsigned int line_number, FILE *ptr);
void _sub(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void _mul(stack_t **head, unsigned int line_number);
void _mod(stack_t **head, unsigned int line_number);
void _pchar(stack_t **head, unsigned int line_number);
void _pstr(stack_t **head, unsigned int line_number);
void _rotl(stack_t **head, unsigned int line_number);

#endif
