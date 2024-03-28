#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void addnode(stack_t **head, int n);
void print_top(stack_t **stack, unsigned int line_number);
void stack_pop(stack_t **stack, unsigned int line_number);
void swap_node(stack_t **stack);
void f_nop(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void addnode(stack_t **head, int n);
void add_nodes(stack_t **stack, unsigned int line_number);
#endif