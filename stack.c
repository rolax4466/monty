#include "monty.h"

/**
 * stack_op - set stack mode to last-in first-out (default)
 * @tp: stack pointer
 */

void stack_op(stack_t **tp __attribute__((unused)))
{
	env_op.mode = LIFO;
}
