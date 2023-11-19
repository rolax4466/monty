#include "monty.h"

/**
 * sub_op - Subtracts the top two elements on the stack
 * @tp: The stack pointer
 */

void sub_op(stack_t **tp)
{
	int to_sub = 0;

	if (!(*tp && *tp != (*tp)->next))
		Perror("L%u: can't sub, stack too short\n", env_op.lno);

	to_sub = (*tp)->n;

	pop_op(tp);

	(*tp)->n -= to_sub;
}
