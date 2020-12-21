#include "monty.h"

/**
 * len_stack - returns length of stack
 * @stack: pointer to head of stack
 * Return: length of stack
 */
size_t len_stack(stack_t **stack)
{
	stack_t *data;
	unsigned int i = 0;

	data = *stack;

	while (data != NULL)
	{
		data = data->next;
		i++;
	}
	return (i);
}
