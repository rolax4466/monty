#include "monty.h"

/**
  * push_op - Push an element to the top of a stack
  * @tp: The stack pointer
  */

void push_op(stack_t **tp)
{
	stack_t *new = NULL;
	const char *nstr = env_op.argv[1];

	if (!(nstr && isint(nstr)))
		Perror("L%u: usage: push integer\n", env_op.lno);

	new = malloc(sizeof(*new));
	if (!new)
		Perror("Error: malloc failed\n");

	new->n = atoi(nstr);
	if (*tp)
	{
		new->prev = (*tp);
		new->next = (*tp)->next;
		new->next->prev = new;
		(*sp)->next = new;
		if (env_op.mode == LIFO)
			(*sp) = new;
	}
	else
	{
		new->prev = new;
		new->next = new;
		(*sp) = new;
	}
}
