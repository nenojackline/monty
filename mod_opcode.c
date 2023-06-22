#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - computes the remainder of the division
 * @stack: stack given by main
 * @lnCount: line counter
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int lnCount)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, lnCount);/*For top node*/
	(*stack)->n = result;
}
