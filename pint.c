#include "monty.h"


/**
 * pint_op - Prints the value at the top of the stack
 * @tp: The stack pointer
 */
void pint_op(stack_t **tp)
{
	if (*tp)
		printf("%d\n", (*tp)->n);
	else
		Perror("L%u: can't pint, stack empty\n", env_op.lno);
}
