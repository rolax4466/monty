#include "monty.h"

/**
 * mul_op - mul the top elements on the stack
 * @tp: The stack pointer
 */

void mul_op(stack_t **tp)
{
	int to_mul = 0;

	if (!(*tp && *tp != (*tp)->next))
		Perror("L%u: can't mul, stack too short\n", env_op.lno);

	to_mul = (*tp)->n;

	pop_op(tp);

	(*tp)->n *= to_mul;
}
