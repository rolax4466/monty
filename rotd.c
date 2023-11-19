#include "monty.h"

/**
 * rotr_op - rotate downward (toward bottom of stack)
 * @tp: stack pointer
 */

void rotr_op(stack_t **tp)
{
	if (*tp)
		*tp = (*tp)->next;
}
