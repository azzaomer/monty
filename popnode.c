#include "monty.h"

/**
 * stack_pop - Removes a node from the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode.
 */
void stack_pop(stack_t **stack)
{
    stack_t *tmp;

    if (stack == NULL || *stack == NULL) {
        fprintf(stderr, "Error\n");
        return; /* Exit function if conditions are not met */
    }

    tmp = *stack;
    *stack = tmp->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(tmp);
}
