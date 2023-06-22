#define _GNU_SOURCE
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @lnCount: ammount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int lnCount)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}
	printf("%c\n", (*stack)->n);
}
