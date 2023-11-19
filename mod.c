#include "monty.h"

/**
 * mod_op - This mod the top two elements on the stack
 * @tp: the stack pointer
 */

void mod_op(stack_t **tp)
{
	int to_mod = 0;

	if (!(*tp && *tp != (*tp)->next))
		pfailure("L%u: can't mod, stack too short\n", env_op.lno);

	to_mod = (*tp)->n;
	if (!to_mod)
		pfailure("L%u: division by zero\n", env_op.lno);

	op_pop(tp);

	(*tp)->n %= to_mod;
}
