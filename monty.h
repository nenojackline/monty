#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
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

#define INSTRUCTIONS { \
		{"push", push},\
		{"pall", pall},\
		{"pint", pint},\
		{"pop", pop},\
		{"swap", swap},\
		{"nop", nop},\
		{"div", fnDiv},\
		{"mul", _mul},\
		{"add", fnAdd},\
		{"sub", fnSub},\
		{"mod", mod},\
		{"pchar", pchar},\
		{"pstr", pstr},\
		{"rotl", rotl},\
		{"rotr", rotr},\
		{NULL, NULL} \
	}
/**
* struct help - argument for the current opcode
* @data_struct: stack mode, stack (default) and queue
* @argument: the arguments of the string
*
* Description: global structure used to pass data around the functions easily
*/
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

extern int status;

void push(stack_t **stack, unsigned int lnCount);
void pall(stack_t **stack, unsigned int lnCount);
void pint(stack_t **stack, unsigned int lnCount);
void swap(stack_t **stack, unsigned int lnCount);
void pop(stack_t **stack, unsigned int lnCount);
void nop(stack_t **stack, unsigned int lnCount);
void fnDiv(stack_t **stack, unsigned int lnCount);
void fnAdd(stack_t **stack, unsigned int lnCount);
void fnSub(stack_t **stack, unsigned int lnCount);
void _mul(stack_t **stack, unsigned int lnCount);
void mod(stack_t **stack, unsigned int lnCount);
void pchar(stack_t **stack, unsigned int lnCount);
void pstr(stack_t **stack, unsigned int lnCount);
void rotl(stack_t **stack, unsigned int ln_count);
void rotr(stack_t **stack, unsigned int ln_count);
void opcode(stack_t **stack, char *vstr, unsigned int lnCount);

int fnIsDigit(char *string);
int fnIsNumber(char *vstr);

stack_t *fnAddNode(stack_t **stack, const int n);
stack_t *fnQueueNode(stack_t **stack, const int n);
void fnFreeStack(stack_t *stack);
size_t fnPrintStack(const stack_t *stack);

#endif /* MONTY_H */
