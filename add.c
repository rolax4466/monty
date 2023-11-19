#include "monty.h"

/**
 * add_op - Adds the top two elements on the stack
 * @tp: The stack pointer
 */

void add_op(stack_t **tp)
{
	int to_add = 0;

	if (!(*tp && *tp != (*tp)->next))
		Perror("L%u: can't add, stack too short\n", env_op.lno);
	to_add = (*tp)->n;

	pop_op(tp);

	(*tp)->n += to_add;
}
