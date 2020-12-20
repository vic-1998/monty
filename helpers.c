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


/**
 * 
 * 
 * 
 */

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


/**
 * 
 * 
 * 
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int _char;

	if (*stack == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	_char = (*stack)->n;
	if (_char < 0 || _char > 127)
	{
		printf("L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(_char);
	putchar('\n');
}

/**
 * 
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	int _char;
	stack_t *m;
	(void)line_number;
	m = *stack;

	while(m != NULL)
	{
		_char = m->n;
		if (_char > 0 && _char < 127)
		{
			m = m->next;
			putchar(_char);
		}
		else
			break;
		
	}
	putchar('\n');
}
