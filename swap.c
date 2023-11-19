#include "monty.h"

/**
 * swap_op - This swaps the top two elements on the stack
 * @tp: The stack pointer
 */
void swap_op(stack_t **tp)
{
	stack_t *p = *tp;

	if (!(p && p != p->next))
		Perror("L%u: can't swap, stack too short\n", env_op.lno);

	p->n ^= p->prev->n;
	p->prev->n ^= p->n;
	p->n ^= p->prev->n;
}
