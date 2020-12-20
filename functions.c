#include "monty.h"

/**
 * 
 * 
 */

size_t len_stack(stack_t **stack)
{
	stack_t *data;
	unsigned int i = 0;
	
	data = *stack;

	while(data != NULL)
	{
		data = data->next;
		i++;
	}
	return (i);
}