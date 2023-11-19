#include "monty.h"

/**
 * stack_free - Free the stack and nullify the stack
 * @tp: A pointer to the top of the stack
 */

void stack_free(stack_t **tp)
{
	stack_t *top = NULL;

	if (tp && *tp)
	{
		top = *tp;
		top->next->prev = NULL;
		do {
			*tp = top->prev;
			free(top);
		} while ((top = *tp));
	}
}

/**
 * free_op - Frees the stack operation environment
 */

void free_op(void)
{
	stack_free(&op_env.tp);
	free(env_op.argv);
	free(env_op.ln);
	env_op.argv = NULL;
	env_op.ln = NULL;
}
