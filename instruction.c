#include "monty.h"
#include <string.h>

/**
 * do_instruction - get the function associated with an opcode
 * @opcode: the opcode to match
 *
 * Return: If opcode is NULL, return NULL. If match is found, return the
 * corresponding function. If match is not found, exit with EXIT_FAILURE.
 */
instruction_fn get_instruction_fn(const char *opcode)
{
	static instruction_t instructions[] = {
		{"add",   add_op},
		{"div",   div_op},
		{"mod",   mod_op},
		{"mul",   mul_op},
		{"nop",   nop_op},
		{"pall",  pall_op},
		{"pchar", pchar_op},
		{"pint",  pint_op},
		{"pop",   pop_op},
		{"pstr",  pstr_op},
		{"push",  push_op},
		{"queue", queue_op},
		{"rotl",  rotl_op},
		{"rotr",  rotr_op},
		{"stack", stack_op},
		{"sub",   sub_op},
		{"swap",  swap_op},
		{0}
	};
	instruction_t *op = instructions;

	if (opcode)
	{
		while (op->opcode)
		{
			if (!strcmp(opcode, op->opcode))
				return (op->fn);
			++op;
		}
		Perror("L%u: unknown instruction %s\n", env_op.lno, opcode);
	}
	return (NULL);
}
