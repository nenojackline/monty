#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * fnAdd -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @lnCount: line counter
 *
 * Return: void
 */
void fnAdd(stack_t **stack, unsigned int lnCount)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, lnCount);/*For top node*/
	(*stack)->n = result;
}
