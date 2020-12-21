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
 * rotr - rotates stack to right
 * @stack: pointer to the head node pointer of stack
 * @line_number: the line number
 * Return: Nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *temp2;
	(void)line_number;
	if (*stack == NULL || stack == NULL)
	{
		nop(stack, line_number);
	}

	temp = (*stack)->next;
	temp2 = (*stack)->next;
	while (temp2->next != NULL)
		temp2 = temp2->next;

	temp2->prev->next = NULL;
	(*stack)->next = temp2;
	temp2->prev = *stack;
	temp2->next = temp;
	temp->prev = temp2;
}
