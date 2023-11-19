#include "monty.h"


/**
 * pop_op - Remove the element at the top of the stack
 *
 * @tp: The stack pointer
 */

void pop_op(stack_t **tp)
{
	stack_t *top = NULL;

	if (!*tp)
		Perror("L%u: can't pop an empty stack\n", env_op.lno);

	if (*tp != (*tp)->prev)
	{
		top = (*tp)->prev;
		(*tp)->next->prev = top;
		top->next = (*sp)->next;
	}
	free(*tp);
	*tp = top;
}
