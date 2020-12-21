#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	if (!stack || !(*stack) || !(*stack)->next)
		return;
	temp = *stack;
	*stack = temp->next;
	while (temp->next)
		temp = temp->next;
	temp->next = (*stack)->prev;
	temp->next->next = NULL;
	temp->next->prev = temp;
	(*stack)->prev = NULL;
}

/**
 * rotrf - rotates stack to right
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void op_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *temp2;
	(void)line_number;
	if (!stack || !(*stack) || !(*stack)->next)
		return;

	temp = *stack;
	temp2 = temp;

	while (temp2->next)
	{
		temp2 = temp2->next;
	}

	temp2->prev->next = NULL;
	temp2->prev = NULL;
	temp->prev = temp2;
	temp2->next = temp;
	*stack = temp2;
}
