#include "monty.h"
/**
 * print_top - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */
void print_top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		/*L<line_number>: can't pint, stack empty*/
		printf("Error\n");	;
	printf("%d\n", (*stack)->n);
}
