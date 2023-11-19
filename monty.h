#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>


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

typedef void (*instruction_fn)(stack_t **);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @fn: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	instruction_fn fn;
} instruction_t;

/**
 * enum stack_mode_n - stack mode enumeration
 * @LIFO: operate as a stack
 * @FIFO: operates as a queue
 */

typedef enum stack_mode_n
{
	LIFO = 0,
	FIFO = 1
} stack_mode_t;


/**
 * struct env_op - The operation environment
 * @tp: Top of stack
 * @argv: argument vector
 * @ln: The line buffer
 * @lns: The line number
 * @mode: Operation mode of stack
 */

typedef struct env_op
{
	stack_t *tp;
	char **argv;
	char *ln;
	size_t lns;
	stack_mode_t mode;
} t_env_op;


extern t_env_op env_op;

instruction_fn get_instruction_fn(const char *opcode);


char **tokenise(char *str);
size_t token_count(const char *string);
void stack_free(stack_t **tp);


void add_op(stack_t **tp);
void div_op(stack_t **tp);
void mod_op(stack_t **tp);
void mul_op(stack_t **tp);
void nop_op(stack_t **tp);
void pall_op(stack_t **tp);
void pchar_op(stack_t **tp);
void pint_op(stack_t **tp);
void pop_op(stack_t **tp);
void pstr_op(stack_t **tp);
void push_op(stack_t **tp);
void queue_op(stack_t **tp);
void rotl_op(stack_t **tp);
void rotr_op(stack_t **tp);
void stack_op(stack_t **tp);
void sub_op(stack_t **tp);
void swap_op(stack_t **tp);


void Perror(const char *format, ...);
int isint(const char *str);
void stack_free(stack_t **tp);
void free_op(void);















#endif /*MONTY_H*/
