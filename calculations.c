#include "monty.h"

/**
 * add - adds top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void add(stack_t **stack, unsigned int line_number)
{
	int n1;
	int n2;
	int suma;

	if (len_stack(stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;

	suma = n1 + n2;

	pop(stack, line_number);

	(*stack)->n = suma;
}
/**
 * sub - subtracts top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int n1;
	int n2;
	int sus;

	if (len_stack(stack) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;

	sus = n2 - n1;

	pop(stack, line_number);

	(*stack)->n = sus;
}

/**
 * _div - divides top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int n1;
	int n2;
	int divi;

	if (len_stack(stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;
	if (n1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	divi = n2 / n1;

	pop(stack, line_number);

	(*stack)->n = divi;
}

/**
 * _mul - multiplies top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int n1;
	int n2;
	int multi;

	if (len_stack(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;

	multi = n1 * n2;

	pop(stack, line_number);

	(*stack)->n = multi;
}

/**
 * _mod - divides top two elements of stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	int n1;
	int n2;
	int res;

	if (len_stack(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	n1 = (*stack)->n;
	n2 = (*stack)->next->n;
	if (n1 == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	res = n2 % n1;

	pop(stack, line_number);

	(*stack)->n = res;
}
