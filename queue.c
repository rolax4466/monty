#include "monty.h"

/**
 * queue_op - set stack mode to first-in first-out
 * @tp: The stack pointer
 */

void queue_op(stack_t **tp __attribute__((unused)))
{
	env_op.mode = FIFO;
}
