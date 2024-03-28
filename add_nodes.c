#include "monty.h"

/**
 * add_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Integer representing the line number of of the opcode.
 */
void add_nodes(stack_t **stack)
{
    int sum;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL) {
        printf("Error\n");
        return; // Exit function if conditions are not met
    }

    (*stack) = (*stack)->next;
    sum = (*stack)->n + (*stack)->prev->n;
    (*stack)->n = sum;
    free((*stack)->prev);
    (*stack)->prev = NULL;
}
