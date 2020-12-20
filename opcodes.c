#include "monty.h"

/**
 * 
 * 
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		nop(stack, line_number);
	}
	
	temp = *stack;
	*stack = temp->next;

	while (temp->next)
		temp = temp->next;
	temp->next = (*stack)->prev;
	temp->next->next = NULL;
	temp->next->prev = temp;
	(*stack)->prev = NULL;

}
