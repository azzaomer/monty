#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: double pointer to the head of the stack
 * @line_number: line number being executed
 *
 * Description: The string is printed starting from the top of the stack
 * with the character at the top of the stack printed first, followed by
 * the rest of the characters up to the stack's top. The string will only
 * be printed if all of the following conditions are met:
 * - The stack is not empty.
 * - The stack contains only ASCII characters, ending with 0.
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    (void)line_number;

    while (temp && temp->n != 0)
    {
        if (temp->n >= 0 && temp->n <= 127)
            putchar(temp->n);
        else
            break;
        temp = temp->next;
    }
    putchar('\n');
}
