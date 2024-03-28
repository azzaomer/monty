#include "monty.h"

/**
 * print_top - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Integer representing the line number of the opcode.
 */
void print_top(stack_t **stack)
{
    if (stack == NULL || *stack == NULL) {
        printf("Error\n");
        return; // Exit function if conditions are not met
    }

    printf("%d\n", (*stack)->n);
}
