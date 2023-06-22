#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack given by main
 * @vstr: string to compare
 * @lnCount: ammount of lines
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *vstr, unsigned int lnCount)
{
	int i = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(vstr, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(vstr, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, vstr) == 0)
		{
			op[i].f(stack, lnCount);
			return; /* if we found a match, run the function */
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", lnCount, vstr);
	status = EXIT_FAILURE;
}
