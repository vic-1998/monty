#include "monty.h"

/**
 * 
 * 
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	int n1, n2;
	stack_t *temp;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		nop(stack, line_number);
	}
	n1 = (*stack)->n;
	temp = *stack;
	while (temp)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}

	n2 = temp->n;
	(*stack)->n = n2;
	temp->n = n2;
}