#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @lnCount: ammount of lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int lnCount)
{
	char *n = global.argument;

	if ((fnIsDigit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", lnCount);
		status = EXIT_FAILURE;
		return;
	}

	if (global.data_struct == 1)
	{
		if (!fnAddNode(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
	else
	{
		if (!fnQueueNode(stack, atoi(global.argument)))
		{
			return;
			status = EXIT_FAILURE;
		}
	}
}
