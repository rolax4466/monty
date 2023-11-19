#include "monty.h"

/**
 * rotl_op - rotate upward (toward top of stack)
 * @sp: The stack pointer
 */

void rotl_op(stack_t **tp)
{
	if (*tp)
		*tp = (*tp)->prev;
}
