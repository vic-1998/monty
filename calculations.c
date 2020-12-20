#include "monty.h"

/**
 * 
 * 
 * 
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum = 0, n1, n2;

	if (len_stack(stack) < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit (EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;
	sum = n1 + n2;
	pop(stack, line_number);
	(*stack)->n = sum;
	
}