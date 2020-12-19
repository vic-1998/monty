#include "monty.h"

/**
 * 
 * 
 * 
 */
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *path = *stack;

	if (*stack == NULL)
		return;

	while (path != NULL)
	{
		printf("%d\n", path->n);
		path = path->next;
	}
}

void pint(stack_t **stack, unsigned int line_number)
{
	int head;

	if (*stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	head = (*stack)->n;
	printf("%d\n", head);
}