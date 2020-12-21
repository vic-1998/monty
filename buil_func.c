#include "monty.h"

/**
 * buil_func - checks for opcode's associated function
 * @opcode: opcode from user input
 * @stack: pointer to stack
 * @line_number: line number of opcode from user input
 * Return: 0 on success, 1 on failure
 */
int buil_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t functions[] = {
	    {"pall", pall},
	    {"pint", pint},
	    {"pop", pop},
	    {"swap", swap},
	    {"add", add},
	    {"nop", nop},
	    {"sub", sub},
	    {"div", _div},
	    {"mul", _mul},
	    {"mod", _mod},
	    {"pchar", pchar},
	    {"pstr", pstr},
	    {"rotl", rotl},
	    {"rotr", op_rotr},
	    {NULL, NULL}};

	for (i = 0; functions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, functions[i].opcode) == 0)
		{
			(functions[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
