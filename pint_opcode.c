#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the top data
 * @stack: stack given by main
 * @lnCount: ammount of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int lnCount)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
