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