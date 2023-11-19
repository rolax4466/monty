#include "monty.h"

/**
 * div_op - Divides the top two elements on the stack
 * @tp: The stack pointer
 */

void div_op(stack_t **tp)
{
	int to_div = 0;

	if (!(*tp && *tp != (*tp)->next))
		Perror("L%u: can't div, stack too short\n", env_op.lno);

	to_div = (*tp)->n;
	if (!to_div)
		Perror("L%u: division by zero\n", env_op.lno);

	pop_op(tp);

	(*tp)->n /= to_div;
}
