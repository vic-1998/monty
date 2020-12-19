#include "monty.h"

/**
 * 
 * 
 * 
 */
void push(stack_t **stack, unsigned int line_number, char *n)
{
	stack_t *new_nodo = NULL;
	int i;

	if (n == NULL)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[0] == '-' && i == 0)
			continue;
		if (isdigit(n[i]) == '\0')
		{
			printf("L%d: usage: push integer0\n", line_number);
			exit(EXIT_FAILURE);
		}
	}

	new_nodo = malloc(sizeof(stack_t));
	if (new_nodo == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_nodo->n = atoi(n);
	new_nodo->prev = NULL;
	new_nodo->next = NULL;

	if (*stack != NULL)
	{
		new_nodo->next = *stack;
		(*stack)->prev = new_nodo;
	}

	*stack = new_nodo;
}