#include "monty.h"

/**
 * pall_op - Prints each element on the stack
 * @tp: The stack pointer
 */

void pall_op(stack_t **tp)
{
	stack_t *p = NULL;

	if (*tp)
	{
		(*tp)->next->prev = NULL;

		for (p = *tp; p; p = p->prev)
			printf("%d\n", p->n);

		(*tp)->next->prev = *tp;
	}
}
