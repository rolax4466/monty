#include "monty.h"

/**
 * pchar_op - This prints the character at the top of the stack
 * @tp: The stack pointer
 */

void pchar_op(stack_t **tp)
{
	if (*tp)
	{
		if ((*tp)->n > 0 && (*tp)->n < 128)
			printf("%c\n", (*tp)->n);
		else
			Perror("L%u: can't pchar, value out of range\n", env_op.lno);
	}
	else
		Perror("L%u: can't pchar, stack empty\n", env_op.lno);


}
