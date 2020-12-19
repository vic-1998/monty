#include "monty.h"

/**
 * 
 * 
 */

int buil_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t functions[] = {
		{"pall", pall}
		};

	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, functions[i].opcode) == 0)
		{
			(functions[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	return (EXIT_FAILURE);
}
