#include "monty.h"

/**
 * len_stack - returns length of stack
 * @stack: pointer to head of stack
 * Return: length of stack
 */
size_t len_stack(stack_t **stack)
{
	stack_t *data;
	unsigned int i;

	data = *stack;
	i = 0;
	while (data != NULL)
	{
		data = data->next;
		i++;
	}

	return (i);
}
/**
 * _stackfree - frees a stack_t stack
 * @stack: stack to be freed
 * Return: void
 */
void _stackfree(stack_t **stack)
{
	stack_t *data;

	while (*stack != NULL)
	{
		data = *stack;
		*stack = (*stack)->next;
		free(data);
	}
}

/**
 * _all - frees line and fp
 * @stack: stack to free
 * @line: line to free from getline
 * @fp: file pointer to free
 * Return: void
 */
void _all(stack_t *stack, char *line, FILE *fp)
{
	if (stack != NULL)
		_stackfree(&stack);

	free(line);
	fclose(fp);
}
