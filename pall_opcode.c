#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 * @lnCount: ammount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int lnCount __attribute__((unused)))
{
	fnPrintStack(*stack);
}
