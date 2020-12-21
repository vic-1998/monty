#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;
	(void)line_number;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;
}

/**
 * rotr - rotates stack to right
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;
	(void)line_number;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	bottom->prev->next = NULL;
	(*stack)->next = bottom;
	bottom->prev = *stack;
	bottom->next = top;
	top->prev = bottom;
}
