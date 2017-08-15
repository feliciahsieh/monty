#include "monty.h"

/**
 * do_nothing - Self-explanatory
 * @stack: Address of the head pointer
 * @line_number: The current line number
 *
 * Return: None
 */
void do_nothing(stack_t **stack, unsigned int line_number)
{
	stack = stack;
	line_number = line_number;
}

/**
 * dummy_handler - Push has different prototype, hence dummy handler
 * @stack: Address of the head pointer
 * @line_number: The current line number
 *
 * Return: None
 */
void dummy_handler(stack_t **stack, unsigned int line_number)
{
	stack = stack;
	line_number = line_number;
}
