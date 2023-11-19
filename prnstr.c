#include "monty.h"

/**
 * pstr_op - print a string starting from the top of the stack
 * @tp: stack pointer
 */

void pstr_op(stack_t **tp)
{
	stack_t *p = NULL;

	if (*tp)
	{
		(*tp)->next->prev = NULL;

		for (p = *sp; p && p->n > 0 && p->n < 128; p = p->prev)
			putchar(p->n);

		(*tp)->next->prev = *tp;
	}

	putchar('\n');
}
